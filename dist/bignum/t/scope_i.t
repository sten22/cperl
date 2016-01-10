#!perl

###############################################################################
# Test "no bigint;" and overloading of hex()/oct() for newer Perls

use strict;
use warnings;

use Test::More tests => 10;
my int $skip = 2;

# no :hex and :oct means these do not get overloaded for older Perls:
use bigint;

isnt(ref(1),    '', 'is in effect');
isnt(ref(2.0),  '', 'is in effect');
isnt(ref(0x20), '', 'is in effect');

SKIP: {
    # Quote version number due to "use bigint;"
    skip('Need at least Perl v5.9.4', $skip) if $] < "5.009004";

    is (ref(hex(9)), 'Math::BigInt', 'hex is overloaded');
    is (ref(oct(07)), 'Math::BigInt', 'oct is overloaded');
}

{
    no bigint;

    is(ref(1),    '', 'is not in effect');
    is(ref(2.0),  '', 'is not in effect');
    is(ref(0x20), '', 'is not in effect');

    isnt(ref(hex(9)),  'Math::BigInt', 'hex is not overloaded');
    isnt(ref(oct(07)), 'Math::BigInt', 'oct is not overloaded');
}
