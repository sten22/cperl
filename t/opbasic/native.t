#!./miniperl

BEGIN {
    chdir 't' if -d 't';
    @INC = '../lib';
}
%int::; %num::; # if used with plain perl

# This file has been placed in t/opbasic to indicate that it should not use
# functions imported from t/test.pl or Test::More, as those programs/libraries
# use operators which are what is being tested in this file.

print "1..130\n";

sub try ($$$) {
   print +($_[1] ? "ok" : "not ok"), " $_[0] - $_[2]\n";
}
sub tryeq ($$$$) {
  if ($_[1] == $_[2]) {
    print "ok $_[0]";
  } else {
    print "not ok $_[0] # $_[1] != $_[2]";
  }
  print " - $_[3]\n";
}
sub tryeq_sloppy ($$$$) {
  if ($_[1] == $_[2]) {
    print "ok $_[0]";
  } else {
    my $error = abs (($_[1] - $_[2]) / $_[1]);
    if ($error < 1e-9) {
      print "ok $_[0] # $_[1] is close to $_[2], \$^O eq $^O";
    } else {
      print "not ok $_[0] # $_[1] != $_[2]";
    }
  }
  print " - $_[3]\n";
}

my $T = 1;
tryeq $T++,  13 %  4, 1,  'i_modulo: positive positive';
tryeq $T++, -13 % -4, -1, 'i_modulo: negative negative';
# incompatibilty warning with negative args:
# with use integer % uses the proper libc module function result, without
# it uses it's own definition of modulo:
# If $n is negative, then $m % $n is $m minus the smallest multiple of
# $n that is not less than $m (that is, the result will be less than or equal to zero).
# with perl5:
#tryeq $T++, -13 %  4, 3, 'modulo: negative positive (perl5 specific)';
#tryeq $T++,  13 % -4, -3, 'modulo: positive negative (perl5 specific)';
# with typed cperl, the int constants promote modulo to i_modulo which uses the libc
# functionality:
tryeq $T++, -13 %  4, -1, 'i_modulo: negative positive (cperl specific)';
tryeq $T++,  13 % -4, 1,  'i_modulo: positive negative (cperl specific)';

my int $a = -13;
my int $b = 4;
my int $r = $a % $b;
# native arith cannot be function args yet
tryeq $T++, $r, 3, 'modulo: negative positive';
($a,$b) = (13, -4);
$r = $a % $b;
tryeq $T++, $r, -3,  'modulo: positive negative';
($a,$b) = (13, 4);
$r = $a % $b;
tryeq $T++, $r, 1,  'modulo: positive positive';
($a,$b) = (-13, -4);
$r = $a % $b;
tryeq $T++, $r, -1,  'modulo: negative negative';

my int $limit = 1e6;

# Division (and modulo) of floating point numbers
# seem to be rather sloppy in Cray.
$limit = 1e8 if $^O eq 'unicos';
my num $n = abs( 13e21 %  4e21 -  1e21);
try $T++, $n < $limit, 'abs() for floating point';
$n = abs( -13e21 %  4e21 -  3e21);
try $T++, $r < $limit, 'abs() for floating point';
$n = abs( 13e21 % -4e21 - -3e21);
try $T++, $n < $limit, 'abs() for floating point';
$n = abs( -13e21 %  -4e21 -  -1e21);
try $T++, $n < $limit, 'abs() for floating point';

# No warnings should appear;
$a = 0;
$a += 1;
tryeq $T++, $a, 1, '+= with positive';
undef $a;
$a += -1;
tryeq $T++, $a, -1, '+= with negative';
undef $a;
$a += 4294967290;
tryeq $T++, $a, 4294967290, '+= with positive';
undef $a;
$a += -4294967290;
tryeq $T++, $a, -4294967290, '+= with negative';
undef $a;
$a += 4294967297;
tryeq $T++, $a, 4294967297, '+= with positive';
undef $a;
$a += -4294967297;
tryeq $T++, $a, -4294967297, '+= with negative';

my int $s;
$s -= 1;
tryeq $T++, $s, -1, '-= with positive';
undef $s;
$s -= -1;
tryeq $T++, $s, +1, '-= with negative';
undef $s;
$s -= -4294967290;
tryeq $T++, $s, +4294967290, '-= with negative';
undef $s;
$s -= 4294967290;
tryeq $T++, $s, -4294967290, '-= with negative';
undef $s;
$s -= 4294967297;
tryeq $T++, $s, -4294967297, '-= with positive';
undef $s;
$s -= -4294967297;
tryeq $T++, $s, +4294967297, '-= with positive';

# multiplication
tryeq $T++, 1 * 3, 3, 'multiplication of two positive integers';
tryeq $T++, -2 * 3, -6, 'multiplication of negative and positive integer';
tryeq $T++, 3 * -3, -9, 'multiplication of positive and negative integer';
tryeq $T++, -4 * -3, 12, 'multiplication of two negative integers';

# check with 0xFFFF and 0xFFFF
tryeq $T++, 65535 * 65535, 4294836225,
    'multiplication: 0xFFFF and 0xFFFF: pos pos';
tryeq $T++, 65535 * -65535, -4294836225,
    'multiplication: 0xFFFF and 0xFFFF: pos neg';
tryeq $T++, -65535 * 65535, -4294836225,
    'multiplication: 0xFFFF and 0xFFFF: pos neg';
tryeq $T++, -65535 * -65535, 4294836225,
    'multiplication: 0xFFFF and 0xFFFF: neg neg';

# check with 0xFFFF and 0x10001
tryeq $T++, 65535 * 65537, 4294967295,
    'multiplication: 0xFFFF and 0x10001: pos pos';
tryeq $T++, 65535 * -65537, -4294967295,
    'multiplication: 0xFFFF and 0x10001: pos neg';
tryeq $T++, -65535 * 65537, -4294967295,
    'multiplication: 0xFFFF and 0x10001: neg pos';
tryeq $T++, -65535 * -65537, 4294967295,
    'multiplication: 0xFFFF and 0x10001: neg neg';

# check with 0x10001 and 0xFFFF
tryeq $T++, 65537 * 65535, 4294967295,
    'multiplication: 0x10001 and 0xFFFF: pos pos';
tryeq $T++, 65537 * -65535, -4294967295,
    'multiplication: 0x10001 and 0xFFFF: pos neg';
tryeq $T++, -65537 * 65535, -4294967295,
    'multiplication: 0x10001 and 0xFFFF: neg pos';
tryeq $T++, -65537 * -65535, 4294967295,
    'multiplication: 0x10001 and 0xFFFF: neg neg';

# These should all be dones as NVs
tryeq $T++, 65537 * 65537, 4295098369, 'multiplication: NV: pos pos';
tryeq $T++, 65537 * -65537, -4295098369, 'multiplication: NV: pos neg';
tryeq $T++, -65537 * 65537, -4295098369, 'multiplication: NV: neg pos';
tryeq $T++, -65537 * -65537, 4295098369, 'multiplication: NV: neg neg';

# will overflow an IV (in 32-bit)
tryeq $T++, 46340 * 46342, 0x80001218,
    'multiplication: overflow an IV in 32-bit: pos pos';
tryeq $T++, 46340 * -46342, -0x80001218,
    'multiplication: overflow an IV in 32-bit: pos neg';
tryeq $T++, -46340 * 46342, -0x80001218,
    'multiplication: overflow an IV in 32-bit: neg pos';
tryeq $T++, -46340 * -46342, 0x80001218,
    'multiplication: overflow an IV in 32-bit: neg neg';

tryeq $T++, 46342 * 46340, 0x80001218,
    'multiplication: overflow an IV in 32-bit: pos pos';
tryeq $T++, 46342 * -46340, -0x80001218,
    'multiplication: overflow an IV in 32-bit: pos neg';
tryeq $T++, -46342 * 46340, -0x80001218,
    'multiplication: overflow an IV in 32-bit: neg pos';
tryeq $T++, -46342 * -46340, 0x80001218,
    'multiplication: overflow an IV in 32-bit: neg neg';

# will overflow a positive IV (in 32-bit)
tryeq $T++, 65536 * 32768, 0x80000000,
    'multiplication: overflow a positive IV in 32-bit: pos pos';
tryeq $T++, 65536 * -32768, -0x80000000,
    'multiplication: overflow a positive IV in 32-bit: pos neg';
tryeq $T++, -65536 * 32768, -0x80000000,
    'multiplication: overflow a positive IV in 32-bit: neg pos';
tryeq $T++, -65536 * -32768, 0x80000000,
    'multiplication: overflow a positive IV in 32-bit: neg neg';

tryeq $T++, 32768 * 65536, 0x80000000,
    'multiplication: overflow a positive IV in 32-bit: pos pos';
tryeq $T++, 32768 * -65536, -0x80000000,
    'multiplication: overflow a positive IV in 32-bit: pos neg';
tryeq $T++, -32768 * 65536, -0x80000000,
    'multiplication: overflow a positive IV in 32-bit: neg pos';
tryeq $T++, -32768 * -65536, 0x80000000,
    'multiplication: overflow a positive IV in 32-bit: neg neg';

# 2147483647 is prime. bah.

tryeq $T++, 46339 * 46341, 0x7ffea80f,
    'multiplication: hex product: pos pos';
tryeq $T++, 46339 * -46341, -0x7ffea80f,
    'multiplication: hex product: pos neg';
tryeq $T++, -46339 * 46341, -0x7ffea80f,
    'multiplication: hex product: neg pos';
tryeq $T++, -46339 * -46341, 0x7ffea80f,
    'multiplication: hex product: neg neg';

# leading space should be ignored

tryeq $T++, 1 + " 1", 2, 'ignore leading space: addition';
tryeq $T++, 3 + " -1", 2, 'ignore leading space: subtraction';
tryeq $T++, 1.2, " 1.2", 'floating point and string equivalent: positive';
tryeq $T++, -1.2, " -1.2", 'floating point and string equivalent: negative';

# division
tryeq $T++, 28/14, 2, 'division of two positive integers';
tryeq $T++, 28/-7, -4, 'division of positive integer by negative';
tryeq $T++, -28/4, -7, 'division of negative integer by positive';
tryeq $T++, -28/-2, 14, 'division of negative integer by negative';

tryeq $T++, 0x80000000/1, 0x80000000,
    'division of positive hex by positive integer';
tryeq $T++, 0x80000000/-1, -0x80000000,
    'division of positive hex by negative integer';
tryeq $T++, -0x80000000/1, -0x80000000,
    'division of negative hex by negative integer';
tryeq $T++, -0x80000000/-1, 0x80000000,
    'division of negative hex by positive integer';

# The example for sloppy divide, rigged to avoid the peephole optimiser.
tryeq_sloppy $T++, "20." / "5.", 4, 'division of floating point without fractional part';

tryeq $T++, 2.5 / 2, 1.25,
    'division of positive floating point by positive integer';
tryeq $T++, 3.5 / -2, -1.75,
    'division of positive floating point by negative integer';
tryeq $T++, -4.5 / 2, -2.25,
    'division of negative floating point by positive integer';
tryeq $T++, -5.5 / -2, 2.75,
    'division of negative floating point by negative integer';

# Bluuurg if your floating point can not accurately cope with powers of 2
# [I suspect this is parsing string->float problems, not actual arith]
tryeq_sloppy $T++, 18446744073709551616/1, 18446744073709551616,
    'division of very large number by 1'; # Bluuurg
tryeq_sloppy $T++, 18446744073709551616/2, 9223372036854775808,
    'division of very large number by 2';
tryeq_sloppy $T++, 18446744073709551616/4294967296, 4294967296,
    'division of two very large numbers';
tryeq_sloppy $T++, 18446744073709551616/9223372036854775808, 2,
    'division of two very large numbers';

{
  # The peephole optimiser is wrong to think that it can substitute intops
  # in place of regular ops, because i_multiply can overflow.
  # Bug reported by "Sisyphus" <kalinabears@hdc.com.au>
  my int $n = 1127;

  my num $float = ($n % 1000) * 167772160.0;
  tryeq_sloppy $T++, $float, 21307064320, 'integer times floating point';

  # On a 32 bit machine, if the i_multiply op is used, you will probably get
  # -167772160. It is actually undefined behaviour, so anything may happen.
  my int $int = ($n % 1000) * 167772160;
  tryeq $T++, $int, 21307064320, 'integer times integer';

  my num $float2 = ($n % 1000 + 0.0) * 167772160;
  tryeq $T++, $float2, 21307064320, 'floating point times integer';

  my int $int2 = ($n % 1000 + 0) * 167772160;
  tryeq $T++, $int2, 21307064320, 'integer plus zero times integer';

  # zero, but in a way that ought to be able to defeat any future optimizer:
  my int $zero = $$ - $$;
  my int $int3 = ($n % 1000 + $zero) * 167772160;
  tryeq $T++, $int3, 21307064320, 'defeat any future optimizer';

  my $t = time;
  my $t1000 = time() * 1000;
  try $T++, abs($t1000 -1000 * $t) <= 2000, 'absolute value';
}

{
  # 64 bit variants
  my int $n = 1127;

  my num $float = ($n % 1000) * 720575940379279360.0;
  tryeq_sloppy $T++, $float, 9.15131444281685e+19,
    '64 bit: integer times floating point';

  my int $int = ($n % 1000) * 720575940379279360;
  tryeq_sloppy $T++, $int, 9.15131444281685e+19,
    '64 bit: integer times integer';

  my num $float2 = ($n % 1000 + 0.0) * 720575940379279360;
  tryeq_sloppy $T++, $float2, 9.15131444281685e+19,
    '64 bit: floating point times integer';

  my int $int2 = ($n % 1000 + 0) * 720575940379279360;
  tryeq_sloppy $T++, $int2, 9.15131444281685e+19,
    '64 bit: integer plus zero times integer';

  # zero, but in a way that ought to be able to defeat any future optimizer:
  my int $zero = $$ - $$;
  my int $int3 = ($n % 1000 + $zero) * 720575940379279360;
  tryeq_sloppy $T++, $int3, 9.15131444281685e+19,
    '64 bit: defeat any future optimizer';
}

# [perl #109542] $1 and "$1" should be treated the same way
"976562500000000" =~ /(\d+)/;
$a = ($1 * 1024);
$b = ("$1" * 1024);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" * something\n';
$a = (1024 * $1);
$b = (1024 * "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something * \$1 vs "\$1"\n';
$a = ($1 + 102400000000000);
$b = ("$1" + 102400000000000);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" + something\n';
$a = (102400000000000 + $1);
$b = (102400000000000 + "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something + \$1 vs "\$1"\n';
$a = ($1 - 10240000000000000);
$b = ("$1" - 10240000000000000);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" - something\n';
$a = (10240000000000000 - $1);
$b = (10240000000000000 - "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something - \$1 vs "\$1"\n';
"976562500" =~ /(\d+)/;
$a = ($1 ** 2);
$b = ("$1" ** 2);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" ** something\n';
"32" =~ /(\d+)/;
$a = (3 ** $1);
$b = (3 ** "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something ** \$1 vs "\$1"\n';
"97656250000000000" =~ /(\d+)/;
$a = ($1 / 10);
$b = ("$1" / 10);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" / something\n';
"10" =~ /(\d+)/;
$a = (97656250000000000 / $1);
$b = (97656250000000000 / "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something / \$1 vs "\$1"\n';
"97656250000000000" =~ /(\d+)/;
$a = ($1 <=> 97656250000000001);
$b = ("$1" <=> 97656250000000001);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" <=> something\n';
$a = (97656250000000001 <=> $1);
$b = (97656250000000001 <=> "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something <=> \$1 vs "\$1"\n';
"97656250000000001" =~ /(\d+)/;
$a = ($1 % 97656250000000002);
$b = ("$1" % 97656250000000002);
print "not "x($a ne $b), "ok ", $T++, qq ' - \$1 vs "\$1" % something\n';
$a = (97656250000000000 % $1);
$b = (97656250000000000 % "$1");
print "not "x($a ne $b), "ok ", $T++, qq ' - something % \$1 vs "\$1"\n';

my $vms_no_ieee = 1 if $^O eq 'VMS'; # cannot load warnings here
#if ($^O eq 'VMS') {
#  use vars '%Config';
#  eval {require Config; import Config};
#  $vms_no_ieee = 1 unless defined($Config{useieee});
#}

if ($^O eq 'vos') {
  print "not ok ", $T++, " # TODO VOS raises SIGFPE instead of producing infinity.\n";
}
elsif ($vms_no_ieee) {
 print $T++, " # SKIP -- the IEEE infinity model is unavailable in this configuration.\n"
}
elsif ($^O eq 'ultrix') {
  print "not ok ", $T++, " # TODO Ultrix enters deep nirvana instead of producing infinity.\n";
}
else {
  # The computation of $v should overflow and produce "infinity"
  # on any system whose max exponent is less than 10**1506.
  # The exact string used to represent infinity varies by OS,
  # so we don't test for it; all we care is that we don't die.
  #
  # Perl considers it to be an error if SIGFPE is raised.
  # Chances are the interpreter will die, since it doesn't set
  # up a handler for SIGFPE.  That's why this test is last; to
  # minimize the number of test failures.  --PG

  my int $n = 5000;
  my $v = 2;
  while (--$n)
  {
    $v *= 2;
  }
  print "ok ", $T++, " - infinity\n";
}


# [perl #120426]
# small numbers shouldn't round to zero if they have extra floating digits

try $T++,  0.153e-305 != 0.0,              '0.153e-305';
try $T++,  0.1530e-305 != 0.0,             '0.1530e-305';
try $T++,  0.15300e-305 != 0.0,            '0.15300e-305';
try $T++,  0.153000e-305 != 0.0,           '0.153000e-305';
try $T++,  0.1530000e-305 != 0.0,          '0.1530000e-305';
try $T++,  0.1530001e-305 != 0.0,          '0.1530001e-305';
try $T++,  1.17549435100e-38 != 0.0,       'min single';
# For flush-to-zero systems this may flush-to-zero, see PERL_SYS_FPU_INIT
try $T++,  2.2250738585072014e-308 != 0.0, 'min double';

# string-to-nv should equal float literals
try $T++, "1.23"   + 0 ==  1.23,  '1.23';
try $T++, " 1.23"  + 0 ==  1.23,  '1.23 with leading space';
try $T++, "1.23 "  + 0 ==  1.23,  '1.23 with trailing space';
try $T++, "+1.23"  + 0 ==  1.23,  '1.23 with unary plus';
try $T++, "-1.23"  + 0 == -1.23,  '1.23 with unary minus';
try $T++, "1.23e4" + 0 ==  12300, '1.23e4';

# trigger various attempts to negate IV_MIN

tryeq $T++,  0x80000000 / -0x80000000, -1, '(IV_MAX+1) / IV_MIN';
tryeq $T++, -0x80000000 /  0x80000000, -1, 'IV_MIN / (IV_MAX+1)';
tryeq $T++,  0x80000000 / -1, -0x80000000, '(IV_MAX+1) / -1';
tryeq $T++,           0 % -0x80000000,  0, '0 % IV_MIN';
tryeq $T++, -0x80000000 % -0x80000000,  0, 'IV_MIN % IV_MIN';
