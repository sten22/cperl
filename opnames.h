/* ex: set ro ft=c: -*- buffer-read-only: t -*-
 *
 *    opnames.h
 *
 *    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
 *    2008 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/opcode.pl from its data.
 * Any changes made here will be lost!
 */

typedef enum opcode {
	OP_NULL		 = 0,
	OP_STUB		 = 1,
	OP_SCALAR	 = 2,
	OP_PUSHMARK	 = 3,
	OP_WANTARRAY	 = 4,
	OP_CONST	 = 5,
	OP_GVSV		 = 6,
	OP_GV		 = 7,
	OP_GELEM	 = 8,
	OP_PADSV	 = 9,
	OP_PADAV	 = 10,
	OP_PADHV	 = 11,
	OP_PADANY	 = 12,
	OP_PUSHRE	 = 13,
	OP_RV2GV	 = 14,
	OP_RV2SV	 = 15,
	OP_AV2ARYLEN	 = 16,
	OP_RV2CV	 = 17,
	OP_ANONCODE	 = 18,
	OP_PROTOTYPE	 = 19,
	OP_REFGEN	 = 20,
	OP_SREFGEN	 = 21,
	OP_REF		 = 22,
	OP_BLESS	 = 23,
	OP_BACKTICK	 = 24,
	OP_GLOB		 = 25,
	OP_READLINE	 = 26,
	OP_RCATLINE	 = 27,
	OP_REGCMAYBE	 = 28,
	OP_REGCRESET	 = 29,
	OP_REGCOMP	 = 30,
	OP_MATCH	 = 31,
	OP_QR		 = 32,
	OP_SUBST	 = 33,
	OP_SUBSTCONT	 = 34,
	OP_TRANS	 = 35,
	OP_TRANSR	 = 36,
	OP_SASSIGN	 = 37,
	OP_AASSIGN	 = 38,
	OP_CHOP		 = 39,
	OP_SCHOP	 = 40,
	OP_CHOMP	 = 41,
	OP_SCHOMP	 = 42,
	OP_DEFINED	 = 43,
	OP_UNDEF	 = 44,
	OP_STUDY	 = 45,
	OP_POS		 = 46,
	OP_PREINC	 = 47,
	OP_I_PREINC	 = 48,
	OP_PREDEC	 = 49,
	OP_I_PREDEC	 = 50,
	OP_POSTINC	 = 51,
	OP_I_POSTINC	 = 52,
	OP_POSTDEC	 = 53,
	OP_I_POSTDEC	 = 54,
	OP_POW		 = 55,
	OP_MULTIPLY	 = 56,
	OP_I_MULTIPLY	 = 57,
	OP_U_MULTIPLY	 = 58,
	OP_DIVIDE	 = 59,
	OP_I_DIVIDE	 = 60,
	OP_MODULO	 = 61,
	OP_I_MODULO	 = 62,
	OP_REPEAT	 = 63,
	OP_ADD		 = 64,
	OP_I_ADD	 = 65,
	OP_U_ADD	 = 66,
	OP_SUBTRACT	 = 67,
	OP_I_SUBTRACT	 = 68,
	OP_CONCAT	 = 69,
	OP_STRINGIFY	 = 70,
	OP_LEFT_SHIFT	 = 71,
	OP_RIGHT_SHIFT	 = 72,
	OP_LT		 = 73,
	OP_I_LT		 = 74,
	OP_GT		 = 75,
	OP_I_GT		 = 76,
	OP_LE		 = 77,
	OP_I_LE		 = 78,
	OP_GE		 = 79,
	OP_I_GE		 = 80,
	OP_EQ		 = 81,
	OP_I_EQ		 = 82,
	OP_NE		 = 83,
	OP_I_NE		 = 84,
	OP_CMP		 = 85,
	OP_I_CMP	 = 86,
	OP_S_LT		 = 87,
	OP_S_GT		 = 88,
	OP_S_LE		 = 89,
	OP_S_GE		 = 90,
	OP_S_EQ		 = 91,
	OP_S_NE		 = 92,
	OP_S_CMP	 = 93,
	OP_BIT_AND	 = 94,
	OP_BIT_XOR	 = 95,
	OP_BIT_OR	 = 96,
	OP_I_BIT_AND	 = 97,
	OP_I_BIT_XOR	 = 98,
	OP_I_BIT_OR	 = 99,
	OP_S_BIT_AND	 = 100,
	OP_S_BIT_XOR	 = 101,
	OP_S_BIT_OR	 = 102,
	OP_NEGATE	 = 103,
	OP_I_NEGATE	 = 104,
	OP_NOT		 = 105,
	OP_COMPLEMENT	 = 106,
	OP_I_COMPLEMENT	 = 107,
	OP_S_COMPLEMENT	 = 108,
	OP_SMARTMATCH	 = 109,
	OP_ATAN2	 = 110,
	OP_SIN		 = 111,
	OP_COS		 = 112,
	OP_RAND		 = 113,
	OP_SRAND	 = 114,
	OP_EXP		 = 115,
	OP_LOG		 = 116,
	OP_SQRT		 = 117,
	OP_INT		 = 118,
	OP_HEX		 = 119,
	OP_OCT		 = 120,
	OP_ABS		 = 121,
	OP_BOX_INT	 = 122,
	OP_BOX_UINT	 = 123,
	OP_BOX_STR	 = 124,
	OP_BOX_NUM	 = 125,
	OP_UNBOX_INT	 = 126,
	OP_UNBOX_UINT	 = 127,
	OP_UNBOX_STR	 = 128,
	OP_UNBOX_NUM	 = 129,
	OP_UINT_LEFT_SHIFT = 130,
	OP_UINT_RIGHT_SHIFT = 131,
	OP_UINT_POW	 = 132,
	OP_UINT_COMPLEMENT = 133,
	OP_INT_PREINC	 = 134,
	OP_INT_PREDEC	 = 135,
	OP_INT_POSTINC	 = 136,
	OP_INT_POSTDEC	 = 137,
	OP_INT_ADD	 = 138,
	OP_INT_SUBTRACT	 = 139,
	OP_INT_MULTIPLY	 = 140,
	OP_INT_DIVIDE	 = 141,
	OP_INT_MODULO	 = 142,
	OP_INT_NEGATE	 = 143,
	OP_INT_NOT	 = 144,
	OP_INT_ABS	 = 145,
	OP_INT_LT	 = 146,
	OP_INT_GT	 = 147,
	OP_INT_LE	 = 148,
	OP_INT_GE	 = 149,
	OP_INT_EQ	 = 150,
	OP_INT_NE	 = 151,
	OP_NUM_ADD	 = 152,
	OP_NUM_SUBTRACT	 = 153,
	OP_NUM_MULTIPLY	 = 154,
	OP_NUM_DIVIDE	 = 155,
	OP_NUM_ATAN2	 = 156,
	OP_NUM_POW	 = 157,
	OP_NUM_SIN	 = 158,
	OP_NUM_COS	 = 159,
	OP_NUM_EXP	 = 160,
	OP_NUM_LOG	 = 161,
	OP_NUM_SQRT	 = 162,
	OP_LENGTH	 = 163,
	OP_SUBSTR	 = 164,
	OP_VEC		 = 165,
	OP_INDEX	 = 166,
	OP_RINDEX	 = 167,
	OP_SPRINTF	 = 168,
	OP_FORMLINE	 = 169,
	OP_ORD		 = 170,
	OP_CHR		 = 171,
	OP_CRYPT	 = 172,
	OP_UCFIRST	 = 173,
	OP_LCFIRST	 = 174,
	OP_UC		 = 175,
	OP_LC		 = 176,
	OP_QUOTEMETA	 = 177,
	OP_RV2AV	 = 178,
	OP_AELEMFAST	 = 179,
	OP_AELEMFAST_LEX = 180,
	OP_AELEM	 = 181,
	OP_I_AELEM	 = 182,
	OP_N_AELEM	 = 183,
	OP_S_AELEM	 = 184,
	OP_INT_AELEM	 = 185,
	OP_NUM_AELEM	 = 186,
	OP_STR_AELEM	 = 187,
	OP_ASLICE	 = 188,
	OP_KVASLICE	 = 189,
	OP_AEACH	 = 190,
	OP_AKEYS	 = 191,
	OP_AVALUES	 = 192,
	OP_EACH		 = 193,
	OP_VALUES	 = 194,
	OP_KEYS		 = 195,
	OP_DELETE	 = 196,
	OP_EXISTS	 = 197,
	OP_RV2HV	 = 198,
	OP_HELEM	 = 199,
	OP_HSLICE	 = 200,
	OP_KVHSLICE	 = 201,
	OP_MULTIDEREF	 = 202,
	OP_UNPACK	 = 203,
	OP_PACK		 = 204,
	OP_SPLIT	 = 205,
	OP_JOIN		 = 206,
	OP_LIST		 = 207,
	OP_LSLICE	 = 208,
	OP_ANONLIST	 = 209,
	OP_ANONHASH	 = 210,
	OP_SPLICE	 = 211,
	OP_PUSH		 = 212,
	OP_POP		 = 213,
	OP_SHIFT	 = 214,
	OP_UNSHIFT	 = 215,
	OP_SORT		 = 216,
	OP_REVERSE	 = 217,
	OP_GREPSTART	 = 218,
	OP_GREPWHILE	 = 219,
	OP_MAPSTART	 = 220,
	OP_MAPWHILE	 = 221,
	OP_RANGE	 = 222,
	OP_FLIP		 = 223,
	OP_FLOP		 = 224,
	OP_AND		 = 225,
	OP_OR		 = 226,
	OP_XOR		 = 227,
	OP_DOR		 = 228,
	OP_COND_EXPR	 = 229,
	OP_ANDASSIGN	 = 230,
	OP_ORASSIGN	 = 231,
	OP_DORASSIGN	 = 232,
	OP_METHOD	 = 233,
	OP_ENTERSUB	 = 234,
	OP_ENTERXSSUB	 = 235,
	OP_LEAVESUB	 = 236,
	OP_LEAVESUBLV	 = 237,
	OP_CALLER	 = 238,
	OP_WARN		 = 239,
	OP_DIE		 = 240,
	OP_RESET	 = 241,
	OP_LINESEQ	 = 242,
	OP_NEXTSTATE	 = 243,
	OP_DBSTATE	 = 244,
	OP_UNSTACK	 = 245,
	OP_ENTER	 = 246,
	OP_LEAVE	 = 247,
	OP_SCOPE	 = 248,
	OP_ENTERITER	 = 249,
	OP_ITER		 = 250,
	OP_ENTERLOOP	 = 251,
	OP_LEAVELOOP	 = 252,
	OP_RETURN	 = 253,
	OP_LAST		 = 254,
	OP_NEXT		 = 255,
	OP_REDO		 = 256,
	OP_DUMP		 = 257,
	OP_GOTO		 = 258,
	OP_EXIT		 = 259,
	OP_METHOD_NAMED	 = 260,
	OP_METHOD_SUPER	 = 261,
	OP_METHOD_REDIR	 = 262,
	OP_METHOD_REDIR_SUPER = 263,
	OP_ENTERGIVEN	 = 264,
	OP_LEAVEGIVEN	 = 265,
	OP_ENTERWHEN	 = 266,
	OP_LEAVEWHEN	 = 267,
	OP_BREAK	 = 268,
	OP_CONTINUE	 = 269,
	OP_OPEN		 = 270,
	OP_CLOSE	 = 271,
	OP_PIPE_OP	 = 272,
	OP_FILENO	 = 273,
	OP_UMASK	 = 274,
	OP_BINMODE	 = 275,
	OP_TIE		 = 276,
	OP_UNTIE	 = 277,
	OP_TIED		 = 278,
	OP_DBMOPEN	 = 279,
	OP_DBMCLOSE	 = 280,
	OP_SSELECT	 = 281,
	OP_SELECT	 = 282,
	OP_GETC		 = 283,
	OP_READ		 = 284,
	OP_ENTERWRITE	 = 285,
	OP_LEAVEWRITE	 = 286,
	OP_PRTF		 = 287,
	OP_PRINT	 = 288,
	OP_SAY		 = 289,
	OP_SYSOPEN	 = 290,
	OP_SYSSEEK	 = 291,
	OP_SYSREAD	 = 292,
	OP_SYSWRITE	 = 293,
	OP_EOF		 = 294,
	OP_TELL		 = 295,
	OP_SEEK		 = 296,
	OP_TRUNCATE	 = 297,
	OP_FCNTL	 = 298,
	OP_IOCTL	 = 299,
	OP_FLOCK	 = 300,
	OP_SEND		 = 301,
	OP_RECV		 = 302,
	OP_SOCKET	 = 303,
	OP_SOCKPAIR	 = 304,
	OP_BIND		 = 305,
	OP_CONNECT	 = 306,
	OP_LISTEN	 = 307,
	OP_ACCEPT	 = 308,
	OP_SHUTDOWN	 = 309,
	OP_GSOCKOPT	 = 310,
	OP_SSOCKOPT	 = 311,
	OP_GETSOCKNAME	 = 312,
	OP_GETPEERNAME	 = 313,
	OP_LSTAT	 = 314,
	OP_STAT		 = 315,
	OP_FTRREAD	 = 316,
	OP_FTRWRITE	 = 317,
	OP_FTREXEC	 = 318,
	OP_FTEREAD	 = 319,
	OP_FTEWRITE	 = 320,
	OP_FTEEXEC	 = 321,
	OP_FTIS		 = 322,
	OP_FTSIZE	 = 323,
	OP_FTMTIME	 = 324,
	OP_FTATIME	 = 325,
	OP_FTCTIME	 = 326,
	OP_FTROWNED	 = 327,
	OP_FTEOWNED	 = 328,
	OP_FTZERO	 = 329,
	OP_FTSOCK	 = 330,
	OP_FTCHR	 = 331,
	OP_FTBLK	 = 332,
	OP_FTFILE	 = 333,
	OP_FTDIR	 = 334,
	OP_FTPIPE	 = 335,
	OP_FTSUID	 = 336,
	OP_FTSGID	 = 337,
	OP_FTSVTX	 = 338,
	OP_FTLINK	 = 339,
	OP_FTTTY	 = 340,
	OP_FTTEXT	 = 341,
	OP_FTBINARY	 = 342,
	OP_CHDIR	 = 343,
	OP_CHOWN	 = 344,
	OP_CHROOT	 = 345,
	OP_UNLINK	 = 346,
	OP_CHMOD	 = 347,
	OP_UTIME	 = 348,
	OP_RENAME	 = 349,
	OP_LINK		 = 350,
	OP_SYMLINK	 = 351,
	OP_READLINK	 = 352,
	OP_MKDIR	 = 353,
	OP_RMDIR	 = 354,
	OP_OPEN_DIR	 = 355,
	OP_READDIR	 = 356,
	OP_TELLDIR	 = 357,
	OP_SEEKDIR	 = 358,
	OP_REWINDDIR	 = 359,
	OP_CLOSEDIR	 = 360,
	OP_FORK		 = 361,
	OP_WAIT		 = 362,
	OP_WAITPID	 = 363,
	OP_SYSTEM	 = 364,
	OP_EXEC		 = 365,
	OP_KILL		 = 366,
	OP_GETPPID	 = 367,
	OP_GETPGRP	 = 368,
	OP_SETPGRP	 = 369,
	OP_GETPRIORITY	 = 370,
	OP_SETPRIORITY	 = 371,
	OP_TIME		 = 372,
	OP_TMS		 = 373,
	OP_LOCALTIME	 = 374,
	OP_GMTIME	 = 375,
	OP_ALARM	 = 376,
	OP_SLEEP	 = 377,
	OP_SHMGET	 = 378,
	OP_SHMCTL	 = 379,
	OP_SHMREAD	 = 380,
	OP_SHMWRITE	 = 381,
	OP_MSGGET	 = 382,
	OP_MSGCTL	 = 383,
	OP_MSGSND	 = 384,
	OP_MSGRCV	 = 385,
	OP_SEMOP	 = 386,
	OP_SEMGET	 = 387,
	OP_SEMCTL	 = 388,
	OP_REQUIRE	 = 389,
	OP_DOFILE	 = 390,
	OP_HINTSEVAL	 = 391,
	OP_ENTEREVAL	 = 392,
	OP_LEAVEEVAL	 = 393,
	OP_ENTERTRY	 = 394,
	OP_LEAVETRY	 = 395,
	OP_GHBYNAME	 = 396,
	OP_GHBYADDR	 = 397,
	OP_GHOSTENT	 = 398,
	OP_GNBYNAME	 = 399,
	OP_GNBYADDR	 = 400,
	OP_GNETENT	 = 401,
	OP_GPBYNAME	 = 402,
	OP_GPBYNUMBER	 = 403,
	OP_GPROTOENT	 = 404,
	OP_GSBYNAME	 = 405,
	OP_GSBYPORT	 = 406,
	OP_GSERVENT	 = 407,
	OP_SHOSTENT	 = 408,
	OP_SNETENT	 = 409,
	OP_SPROTOENT	 = 410,
	OP_SSERVENT	 = 411,
	OP_EHOSTENT	 = 412,
	OP_ENETENT	 = 413,
	OP_EPROTOENT	 = 414,
	OP_ESERVENT	 = 415,
	OP_GPWNAM	 = 416,
	OP_GPWUID	 = 417,
	OP_GPWENT	 = 418,
	OP_SPWENT	 = 419,
	OP_EPWENT	 = 420,
	OP_GGRNAM	 = 421,
	OP_GGRGID	 = 422,
	OP_GGRENT	 = 423,
	OP_SGRENT	 = 424,
	OP_EGRENT	 = 425,
	OP_GETLOGIN	 = 426,
	OP_SYSCALL	 = 427,
	OP_LOCK		 = 428,
	OP_ONCE		 = 429,
	OP_CUSTOM	 = 430,
	OP_REACH	 = 431,
	OP_RKEYS	 = 432,
	OP_RVALUES	 = 433,
	OP_COREARGS	 = 434,
	OP_RUNCV	 = 435,
	OP_FC		 = 436,
	OP_PADCV	 = 437,
	OP_INTROCV	 = 438,
	OP_CLONECV	 = 439,
	OP_PADRANGE	 = 440,
	OP_REFASSIGN	 = 441,
	OP_LVREF	 = 442,
	OP_LVREFSLICE	 = 443,
	OP_LVAVREF	 = 444,
	OP_ANONCONST	 = 445,
	OP_max		
} opcode;

#define MAXO 446
#define OP_FREED MAXO


/* This encodes the offsets as signed char of the typed variants for each op.
   The first byte is the number of following bytes, max 8.
   variants: u_ i_ n_ s_ int_ uint_ num_ str_ */
#ifndef DOINIT
EXTCONST const char PL_op_type_variants[][8];
#else
EXTCONST const char PL_op_type_variants[][8] = {
	/*   0 null             */ {0},	/*  */
	/*   1 stub             */ {0},	/*  */
	/*   2 scalar           */ {0},	/*  */
	/*   3 pushmark         */ {0},	/*  */
	/*   4 wantarray        */ {0},	/*  */
	/*   5 const            */ {0},	/*  */
	/*   6 gvsv             */ {0},	/*  */
	/*   7 gv               */ {0},	/*  */
	/*   8 gelem            */ {0},	/*  */
	/*   9 padsv            */ {0},	/*  */
	/*  10 padav            */ {0},	/*  */
	/*  11 padhv            */ {0},	/*  */
	/*  12 padany           */ {0},	/*  */
	/*  13 pushre           */ {0},	/*  */
	/*  14 rv2gv            */ {0},	/*  */
	/*  15 rv2sv            */ {0},	/*  */
	/*  16 av2arylen        */ {0},	/*  */
	/*  17 rv2cv            */ {0},	/*  */
	/*  18 anoncode         */ {0},	/*  */
	/*  19 prototype        */ {0},	/*  */
	/*  20 refgen           */ {0},	/*  */
	/*  21 srefgen          */ {0},	/*  */
	/*  22 ref              */ {0},	/*  */
	/*  23 bless            */ {0},	/*  */
	/*  24 backtick         */ {0},	/*  */
	/*  25 glob             */ {0},	/*  */
	/*  26 readline         */ {0},	/*  */
	/*  27 rcatline         */ {0},	/*  */
	/*  28 regcmaybe        */ {0},	/*  */
	/*  29 regcreset        */ {0},	/*  */
	/*  30 regcomp          */ {0},	/*  */
	/*  31 match            */ {0},	/*  */
	/*  32 qr               */ {0},	/*  */
	/*  33 subst            */ {0},	/*  */
	/*  34 substcont        */ {0},	/*  */
	/*  35 trans            */ {0},	/*  */
	/*  36 transr           */ {0},	/*  */
	/*  37 sassign          */ {0},	/*  */
	/*  38 aassign          */ {0},	/*  */
	/*  39 chop             */ {0},	/*  */
	/*  40 schop            */ {0},	/*  */
	/*  41 chomp            */ {0},	/*  */
	/*  42 schomp           */ {0},	/*  */
	/*  43 defined          */ {0},	/*  */
	/*  44 undef            */ {0},	/*  */
	/*  45 study            */ {0},	/*  */
	/*  46 pos              */ {0},	/*  */
	/*  47 preinc           */ {2,1,87},	/* i_preinc:48 int_preinc:134 */
	/*  48 i_preinc         */ {1,86},	/* int_preinc:134 */
	/*  49 predec           */ {2,1,86},	/* i_predec:50 int_predec:135 */
	/*  50 i_predec         */ {1,85},	/* int_predec:135 */
	/*  51 postinc          */ {2,1,85},	/* i_postinc:52 int_postinc:136 */
	/*  52 i_postinc        */ {1,84},	/* int_postinc:136 */
	/*  53 postdec          */ {2,1,84},	/* i_postdec:54 int_postdec:137 */
	/*  54 i_postdec        */ {1,83},	/* int_postdec:137 */
	/*  55 pow              */ {2,77,102},	/* uint_pow:132 num_pow:157 */
	/*  56 multiply         */ {4,2,1,84,98},	/* u_multiply:58 i_multiply:57 int_multiply:140 num_multiply:154 */
	/*  57 i_multiply       */ {1,83},	/* int_multiply:140 */
	/*  58 u_multiply       */ {0},	/*  */
	/*  59 divide           */ {3,1,82,96},	/* i_divide:60 int_divide:141 num_divide:155 */
	/*  60 i_divide         */ {1,81},	/* int_divide:141 */
	/*  61 modulo           */ {2,1,81},	/* i_modulo:62 int_modulo:142 */
	/*  62 i_modulo         */ {1,80},	/* int_modulo:142 */
	/*  63 repeat           */ {0},	/*  */
	/*  64 add              */ {4,2,1,74,88},	/* u_add:66 i_add:65 int_add:138 num_add:152 */
	/*  65 i_add            */ {1,73},	/* int_add:138 */
	/*  66 u_add            */ {0},	/*  */
	/*  67 subtract         */ {3,1,72,86},	/* i_subtract:68 int_subtract:139 num_subtract:153 */
	/*  68 i_subtract       */ {1,71},	/* int_subtract:139 */
	/*  69 concat           */ {0},	/*  */
	/*  70 stringify        */ {0},	/*  */
	/*  71 left_shift       */ {1,59},	/* uint_left_shift:130 */
	/*  72 right_shift      */ {1,59},	/* uint_right_shift:131 */
	/*  73 lt               */ {3,1,14,73},	/* i_lt:74 s_lt:87 int_lt:146 */
	/*  74 i_lt             */ {1,72},	/* int_lt:146 */
	/*  75 gt               */ {3,1,13,72},	/* i_gt:76 s_gt:88 int_gt:147 */
	/*  76 i_gt             */ {1,71},	/* int_gt:147 */
	/*  77 le               */ {3,1,12,71},	/* i_le:78 s_le:89 int_le:148 */
	/*  78 i_le             */ {1,70},	/* int_le:148 */
	/*  79 ge               */ {3,1,11,70},	/* i_ge:80 s_ge:90 int_ge:149 */
	/*  80 i_ge             */ {1,69},	/* int_ge:149 */
	/*  81 eq               */ {3,1,10,69},	/* i_eq:82 s_eq:91 int_eq:150 */
	/*  82 i_eq             */ {1,68},	/* int_eq:150 */
	/*  83 ne               */ {3,1,9,68},	/* i_ne:84 s_ne:92 int_ne:151 */
	/*  84 i_ne             */ {1,67},	/* int_ne:151 */
	/*  85 cmp              */ {2,1,8},	/* i_cmp:86 s_cmp:93 */
	/*  86 i_cmp            */ {0},	/*  */
	/*  87 s_lt             */ {0},	/*  */
	/*  88 s_gt             */ {0},	/*  */
	/*  89 s_le             */ {0},	/*  */
	/*  90 s_ge             */ {0},	/*  */
	/*  91 s_eq             */ {0},	/*  */
	/*  92 s_ne             */ {0},	/*  */
	/*  93 s_cmp            */ {0},	/*  */
	/*  94 bit_and          */ {2,3,6},	/* i_bit_and:97 s_bit_and:100 */
	/*  95 bit_xor          */ {2,3,6},	/* i_bit_xor:98 s_bit_xor:101 */
	/*  96 bit_or           */ {2,3,6},	/* i_bit_or:99 s_bit_or:102 */
	/*  97 i_bit_and        */ {0},	/*  */
	/*  98 i_bit_xor        */ {0},	/*  */
	/*  99 i_bit_or         */ {0},	/*  */
	/* 100 s_bit_and        */ {0},	/*  */
	/* 101 s_bit_xor        */ {0},	/*  */
	/* 102 s_bit_or         */ {0},	/*  */
	/* 103 negate           */ {2,1,40},	/* i_negate:104 int_negate:143 */
	/* 104 i_negate         */ {1,39},	/* int_negate:143 */
	/* 105 not              */ {1,39},	/* int_not:144 */
	/* 106 complement       */ {3,1,2,27},	/* i_complement:107 s_complement:108 uint_complement:133 */
	/* 107 i_complement     */ {1,26},	/* uint_complement:133 */
	/* 108 s_complement     */ {0},	/*  */
	/* 109 smartmatch       */ {0},	/*  */
	/* 110 atan2            */ {1,46},	/* num_atan2:156 */
	/* 111 sin              */ {1,47},	/* num_sin:158 */
	/* 112 cos              */ {1,47},	/* num_cos:159 */
	/* 113 rand             */ {0},	/*  */
	/* 114 srand            */ {0},	/*  */
	/* 115 exp              */ {1,45},	/* num_exp:160 */
	/* 116 log              */ {1,45},	/* num_log:161 */
	/* 117 sqrt             */ {1,45},	/* num_sqrt:162 */
	/* 118 int              */ {0},	/*  */
	/* 119 hex              */ {0},	/*  */
	/* 120 oct              */ {0},	/*  */
	/* 121 abs              */ {1,24},	/* int_abs:145 */
	/* 122 box_int          */ {0},	/*  */
	/* 123 box_uint         */ {0},	/*  */
	/* 124 box_str          */ {0},	/*  */
	/* 125 box_num          */ {0},	/*  */
	/* 126 unbox_int        */ {0},	/*  */
	/* 127 unbox_uint       */ {0},	/*  */
	/* 128 unbox_str        */ {0},	/*  */
	/* 129 unbox_num        */ {0},	/*  */
	/* 130 uint_left_shift  */ {0},	/*  */
	/* 131 uint_right_shift */ {0},	/*  */
	/* 132 uint_pow         */ {0},	/*  */
	/* 133 uint_complement  */ {0},	/*  */
	/* 134 int_preinc       */ {0},	/*  */
	/* 135 int_predec       */ {0},	/*  */
	/* 136 int_postinc      */ {0},	/*  */
	/* 137 int_postdec      */ {0},	/*  */
	/* 138 int_add          */ {0},	/*  */
	/* 139 int_subtract     */ {0},	/*  */
	/* 140 int_multiply     */ {0},	/*  */
	/* 141 int_divide       */ {0},	/*  */
	/* 142 int_modulo       */ {0},	/*  */
	/* 143 int_negate       */ {0},	/*  */
	/* 144 int_not          */ {0},	/*  */
	/* 145 int_abs          */ {0},	/*  */
	/* 146 int_lt           */ {0},	/*  */
	/* 147 int_gt           */ {0},	/*  */
	/* 148 int_le           */ {0},	/*  */
	/* 149 int_ge           */ {0},	/*  */
	/* 150 int_eq           */ {0},	/*  */
	/* 151 int_ne           */ {0},	/*  */
	/* 152 num_add          */ {0},	/*  */
	/* 153 num_subtract     */ {0},	/*  */
	/* 154 num_multiply     */ {0},	/*  */
	/* 155 num_divide       */ {0},	/*  */
	/* 156 num_atan2        */ {0},	/*  */
	/* 157 num_pow          */ {0},	/*  */
	/* 158 num_sin          */ {0},	/*  */
	/* 159 num_cos          */ {0},	/*  */
	/* 160 num_exp          */ {0},	/*  */
	/* 161 num_log          */ {0},	/*  */
	/* 162 num_sqrt         */ {0},	/*  */
	/* 163 length           */ {0},	/*  */
	/* 164 substr           */ {0},	/*  */
	/* 165 vec              */ {0},	/*  */
	/* 166 index            */ {0},	/*  */
	/* 167 rindex           */ {0},	/*  */
	/* 168 sprintf          */ {0},	/*  */
	/* 169 formline         */ {0},	/*  */
	/* 170 ord              */ {0},	/*  */
	/* 171 chr              */ {0},	/*  */
	/* 172 crypt            */ {0},	/*  */
	/* 173 ucfirst          */ {0},	/*  */
	/* 174 lcfirst          */ {0},	/*  */
	/* 175 uc               */ {0},	/*  */
	/* 176 lc               */ {0},	/*  */
	/* 177 quotemeta        */ {0},	/*  */
	/* 178 rv2av            */ {0},	/*  */
	/* 179 aelemfast        */ {0},	/*  */
	/* 180 aelemfast_lex    */ {0},	/*  */
	/* 181 aelem            */ {6,1,2,3,4,5,6},	/* i_aelem:182 n_aelem:183 s_aelem:184 int_aelem:185 num_aelem:186 str_aelem:187 */
	/* 182 i_aelem          */ {1,3},	/* int_aelem:185 */
	/* 183 n_aelem          */ {1,3},	/* num_aelem:186 */
	/* 184 s_aelem          */ {1,3},	/* str_aelem:187 */
	/* 185 int_aelem        */ {0},	/*  */
	/* 186 num_aelem        */ {0},	/*  */
	/* 187 str_aelem        */ {0},	/*  */
	/* 188 aslice           */ {0},	/*  */
	/* 189 kvaslice         */ {0},	/*  */
	/* 190 aeach            */ {0},	/*  */
	/* 191 akeys            */ {0},	/*  */
	/* 192 avalues          */ {0},	/*  */
	/* 193 each             */ {0},	/*  */
	/* 194 values           */ {0},	/*  */
	/* 195 keys             */ {0},	/*  */
	/* 196 delete           */ {0},	/*  */
	/* 197 exists           */ {0},	/*  */
	/* 198 rv2hv            */ {0},	/*  */
	/* 199 helem            */ {0},	/*  */
	/* 200 hslice           */ {0},	/*  */
	/* 201 kvhslice         */ {0},	/*  */
	/* 202 multideref       */ {0},	/*  */
	/* 203 unpack           */ {0},	/*  */
	/* 204 pack             */ {0},	/*  */
	/* 205 split            */ {0},	/*  */
	/* 206 join             */ {0},	/*  */
	/* 207 list             */ {0},	/*  */
	/* 208 lslice           */ {0},	/*  */
	/* 209 anonlist         */ {0},	/*  */
	/* 210 anonhash         */ {0},	/*  */
	/* 211 splice           */ {0},	/*  */
	/* 212 push             */ {0},	/*  */
	/* 213 pop              */ {0},	/*  */
	/* 214 shift            */ {0},	/*  */
	/* 215 unshift          */ {0},	/*  */
	/* 216 sort             */ {0},	/*  */
	/* 217 reverse          */ {0},	/*  */
	/* 218 grepstart        */ {0},	/*  */
	/* 219 grepwhile        */ {0},	/*  */
	/* 220 mapstart         */ {0},	/*  */
	/* 221 mapwhile         */ {0},	/*  */
	/* 222 range            */ {0},	/*  */
	/* 223 flip             */ {0},	/*  */
	/* 224 flop             */ {0},	/*  */
	/* 225 and              */ {0},	/*  */
	/* 226 or               */ {0},	/*  */
	/* 227 xor              */ {0},	/*  */
	/* 228 dor              */ {0},	/*  */
	/* 229 cond_expr        */ {0},	/*  */
	/* 230 andassign        */ {0},	/*  */
	/* 231 orassign         */ {0},	/*  */
	/* 232 dorassign        */ {0},	/*  */
	/* 233 method           */ {0},	/*  */
	/* 234 entersub         */ {0},	/*  */
	/* 235 enterxssub       */ {0},	/*  */
	/* 236 leavesub         */ {0},	/*  */
	/* 237 leavesublv       */ {0},	/*  */
	/* 238 caller           */ {0},	/*  */
	/* 239 warn             */ {0},	/*  */
	/* 240 die              */ {0},	/*  */
	/* 241 reset            */ {0},	/*  */
	/* 242 lineseq          */ {0},	/*  */
	/* 243 nextstate        */ {0},	/*  */
	/* 244 dbstate          */ {0},	/*  */
	/* 245 unstack          */ {0},	/*  */
	/* 246 enter            */ {0},	/*  */
	/* 247 leave            */ {0},	/*  */
	/* 248 scope            */ {0},	/*  */
	/* 249 enteriter        */ {0},	/*  */
	/* 250 iter             */ {0},	/*  */
	/* 251 enterloop        */ {0},	/*  */
	/* 252 leaveloop        */ {0},	/*  */
	/* 253 return           */ {0},	/*  */
	/* 254 last             */ {0},	/*  */
	/* 255 next             */ {0},	/*  */
	/* 256 redo             */ {0},	/*  */
	/* 257 dump             */ {0},	/*  */
	/* 258 goto             */ {0},	/*  */
	/* 259 exit             */ {0},	/*  */
	/* 260 method_named     */ {0},	/*  */
	/* 261 method_super     */ {0},	/*  */
	/* 262 method_redir     */ {0},	/*  */
	/* 263 method_redir_super */ {0},	/*  */
	/* 264 entergiven       */ {0},	/*  */
	/* 265 leavegiven       */ {0},	/*  */
	/* 266 enterwhen        */ {0},	/*  */
	/* 267 leavewhen        */ {0},	/*  */
	/* 268 break            */ {0},	/*  */
	/* 269 continue         */ {0},	/*  */
	/* 270 open             */ {0},	/*  */
	/* 271 close            */ {0},	/*  */
	/* 272 pipe_op          */ {0},	/*  */
	/* 273 fileno           */ {0},	/*  */
	/* 274 umask            */ {0},	/*  */
	/* 275 binmode          */ {0},	/*  */
	/* 276 tie              */ {0},	/*  */
	/* 277 untie            */ {0},	/*  */
	/* 278 tied             */ {0},	/*  */
	/* 279 dbmopen          */ {0},	/*  */
	/* 280 dbmclose         */ {0},	/*  */
	/* 281 sselect          */ {0},	/*  */
	/* 282 select           */ {0},	/*  */
	/* 283 getc             */ {0},	/*  */
	/* 284 read             */ {0},	/*  */
	/* 285 enterwrite       */ {0},	/*  */
	/* 286 leavewrite       */ {0},	/*  */
	/* 287 prtf             */ {0},	/*  */
	/* 288 print            */ {0},	/*  */
	/* 289 say              */ {0},	/*  */
	/* 290 sysopen          */ {0},	/*  */
	/* 291 sysseek          */ {0},	/*  */
	/* 292 sysread          */ {0},	/*  */
	/* 293 syswrite         */ {0},	/*  */
	/* 294 eof              */ {0},	/*  */
	/* 295 tell             */ {0},	/*  */
	/* 296 seek             */ {0},	/*  */
	/* 297 truncate         */ {0},	/*  */
	/* 298 fcntl            */ {0},	/*  */
	/* 299 ioctl            */ {0},	/*  */
	/* 300 flock            */ {0},	/*  */
	/* 301 send             */ {0},	/*  */
	/* 302 recv             */ {0},	/*  */
	/* 303 socket           */ {0},	/*  */
	/* 304 sockpair         */ {0},	/*  */
	/* 305 bind             */ {0},	/*  */
	/* 306 connect          */ {0},	/*  */
	/* 307 listen           */ {0},	/*  */
	/* 308 accept           */ {0},	/*  */
	/* 309 shutdown         */ {0},	/*  */
	/* 310 gsockopt         */ {0},	/*  */
	/* 311 ssockopt         */ {0},	/*  */
	/* 312 getsockname      */ {0},	/*  */
	/* 313 getpeername      */ {0},	/*  */
	/* 314 lstat            */ {0},	/*  */
	/* 315 stat             */ {0},	/*  */
	/* 316 ftrread          */ {0},	/*  */
	/* 317 ftrwrite         */ {0},	/*  */
	/* 318 ftrexec          */ {0},	/*  */
	/* 319 fteread          */ {0},	/*  */
	/* 320 ftewrite         */ {0},	/*  */
	/* 321 fteexec          */ {0},	/*  */
	/* 322 ftis             */ {0},	/*  */
	/* 323 ftsize           */ {0},	/*  */
	/* 324 ftmtime          */ {0},	/*  */
	/* 325 ftatime          */ {0},	/*  */
	/* 326 ftctime          */ {0},	/*  */
	/* 327 ftrowned         */ {0},	/*  */
	/* 328 fteowned         */ {0},	/*  */
	/* 329 ftzero           */ {0},	/*  */
	/* 330 ftsock           */ {0},	/*  */
	/* 331 ftchr            */ {0},	/*  */
	/* 332 ftblk            */ {0},	/*  */
	/* 333 ftfile           */ {0},	/*  */
	/* 334 ftdir            */ {0},	/*  */
	/* 335 ftpipe           */ {0},	/*  */
	/* 336 ftsuid           */ {0},	/*  */
	/* 337 ftsgid           */ {0},	/*  */
	/* 338 ftsvtx           */ {0},	/*  */
	/* 339 ftlink           */ {0},	/*  */
	/* 340 fttty            */ {0},	/*  */
	/* 341 fttext           */ {0},	/*  */
	/* 342 ftbinary         */ {0},	/*  */
	/* 343 chdir            */ {0},	/*  */
	/* 344 chown            */ {0},	/*  */
	/* 345 chroot           */ {0},	/*  */
	/* 346 unlink           */ {0},	/*  */
	/* 347 chmod            */ {0},	/*  */
	/* 348 utime            */ {0},	/*  */
	/* 349 rename           */ {0},	/*  */
	/* 350 link             */ {0},	/*  */
	/* 351 symlink          */ {0},	/*  */
	/* 352 readlink         */ {0},	/*  */
	/* 353 mkdir            */ {0},	/*  */
	/* 354 rmdir            */ {0},	/*  */
	/* 355 open_dir         */ {0},	/*  */
	/* 356 readdir          */ {0},	/*  */
	/* 357 telldir          */ {0},	/*  */
	/* 358 seekdir          */ {0},	/*  */
	/* 359 rewinddir        */ {0},	/*  */
	/* 360 closedir         */ {0},	/*  */
	/* 361 fork             */ {0},	/*  */
	/* 362 wait             */ {0},	/*  */
	/* 363 waitpid          */ {0},	/*  */
	/* 364 system           */ {0},	/*  */
	/* 365 exec             */ {0},	/*  */
	/* 366 kill             */ {0},	/*  */
	/* 367 getppid          */ {0},	/*  */
	/* 368 getpgrp          */ {0},	/*  */
	/* 369 setpgrp          */ {0},	/*  */
	/* 370 getpriority      */ {0},	/*  */
	/* 371 setpriority      */ {0},	/*  */
	/* 372 time             */ {0},	/*  */
	/* 373 tms              */ {0},	/*  */
	/* 374 localtime        */ {0},	/*  */
	/* 375 gmtime           */ {0},	/*  */
	/* 376 alarm            */ {0},	/*  */
	/* 377 sleep            */ {0},	/*  */
	/* 378 shmget           */ {0},	/*  */
	/* 379 shmctl           */ {0},	/*  */
	/* 380 shmread          */ {0},	/*  */
	/* 381 shmwrite         */ {0},	/*  */
	/* 382 msgget           */ {0},	/*  */
	/* 383 msgctl           */ {0},	/*  */
	/* 384 msgsnd           */ {0},	/*  */
	/* 385 msgrcv           */ {0},	/*  */
	/* 386 semop            */ {0},	/*  */
	/* 387 semget           */ {0},	/*  */
	/* 388 semctl           */ {0},	/*  */
	/* 389 require          */ {0},	/*  */
	/* 390 dofile           */ {0},	/*  */
	/* 391 hintseval        */ {0},	/*  */
	/* 392 entereval        */ {0},	/*  */
	/* 393 leaveeval        */ {0},	/*  */
	/* 394 entertry         */ {0},	/*  */
	/* 395 leavetry         */ {0},	/*  */
	/* 396 ghbyname         */ {0},	/*  */
	/* 397 ghbyaddr         */ {0},	/*  */
	/* 398 ghostent         */ {0},	/*  */
	/* 399 gnbyname         */ {0},	/*  */
	/* 400 gnbyaddr         */ {0},	/*  */
	/* 401 gnetent          */ {0},	/*  */
	/* 402 gpbyname         */ {0},	/*  */
	/* 403 gpbynumber       */ {0},	/*  */
	/* 404 gprotoent        */ {0},	/*  */
	/* 405 gsbyname         */ {0},	/*  */
	/* 406 gsbyport         */ {0},	/*  */
	/* 407 gservent         */ {0},	/*  */
	/* 408 shostent         */ {0},	/*  */
	/* 409 snetent          */ {0},	/*  */
	/* 410 sprotoent        */ {0},	/*  */
	/* 411 sservent         */ {0},	/*  */
	/* 412 ehostent         */ {0},	/*  */
	/* 413 enetent          */ {0},	/*  */
	/* 414 eprotoent        */ {0},	/*  */
	/* 415 eservent         */ {0},	/*  */
	/* 416 gpwnam           */ {0},	/*  */
	/* 417 gpwuid           */ {0},	/*  */
	/* 418 gpwent           */ {0},	/*  */
	/* 419 spwent           */ {0},	/*  */
	/* 420 epwent           */ {0},	/*  */
	/* 421 ggrnam           */ {0},	/*  */
	/* 422 ggrgid           */ {0},	/*  */
	/* 423 ggrent           */ {0},	/*  */
	/* 424 sgrent           */ {0},	/*  */
	/* 425 egrent           */ {0},	/*  */
	/* 426 getlogin         */ {0},	/*  */
	/* 427 syscall          */ {0},	/*  */
	/* 428 lock             */ {0},	/*  */
	/* 429 once             */ {0},	/*  */
	/* 430 custom           */ {0},	/*  */
	/* 431 reach            */ {0},	/*  */
	/* 432 rkeys            */ {0},	/*  */
	/* 433 rvalues          */ {0},	/*  */
	/* 434 coreargs         */ {0},	/*  */
	/* 435 runcv            */ {0},	/*  */
	/* 436 fc               */ {0},	/*  */
	/* 437 padcv            */ {0},	/*  */
	/* 438 introcv          */ {0},	/*  */
	/* 439 clonecv          */ {0},	/*  */
	/* 440 padrange         */ {0},	/*  */
	/* 441 refassign        */ {0},	/*  */
	/* 442 lvref            */ {0},	/*  */
	/* 443 lvrefslice       */ {0},	/*  */
	/* 444 lvavref          */ {0},	/*  */
	/* 445 anonconst        */ {0},	/*  */
	/* 446: freed */	{ NULL }
};
#endif

#define NUM_OP_TYPE_VARIANTS(op) PL_op_type_variants[op][0]

/* for 1 to num */
#define OP_TYPE_VARIANT(op, _j) \
  (PL_op_type_variants[(op)][(_j)] \
    ? (op) + PL_op_type_variants[(op)][(_j)] \
    : 0)


/* the OP_IS_* macros are optimized to a simple range check because
    all the member OPs are contiguous in regen/opcodes table.
    opcode.pl verifies the range contiguity, or generates an OR-equals
    expression */

#define OP_IS_SOCKET(op)	\
	((op) >= OP_SEND && (op) <= OP_GETPEERNAME)

#define OP_IS_FILETEST(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTBINARY)

#define OP_IS_FILETEST_ACCESS(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTEEXEC)

#define OP_IS_NUMCOMPARE(op)	\
	((op) >= OP_LT && (op) <= OP_I_CMP)

#define OP_IS_DIRHOP(op)	\
	((op) >= OP_READDIR && (op) <= OP_CLOSEDIR)

#define OP_IS_INFIX_BIT(op)	\
	((op) >= OP_BIT_AND && (op) <= OP_S_BIT_OR)

/* backcompat old Perl 5 names: */
#if 1
#define OP_NCMP		 OP_CMP
#define OP_I_NCMP	 OP_I_CMP
#define OP_SLT		 OP_S_LT
#define OP_SGT		 OP_S_GT
#define OP_SLE		 OP_S_LE
#define OP_SGE		 OP_S_GE
#define OP_SEQ		 OP_S_EQ
#define OP_SNE		 OP_S_NE
#define OP_SCMP		 OP_S_CMP
#define OP_NBIT_AND	 OP_I_BIT_AND
#define OP_NBIT_XOR	 OP_I_BIT_XOR
#define OP_NBIT_OR	 OP_I_BIT_OR
#define OP_SBIT_AND	 OP_S_BIT_AND
#define OP_SBIT_XOR	 OP_S_BIT_XOR
#define OP_SBIT_OR	 OP_S_BIT_OR
#define OP_NCOMPLEMENT	 OP_I_COMPLEMENT
#define OP_SCOMPLEMENT	 OP_S_COMPLEMENT

#define Perl_pp_ncmp	 Perl_pp_cmp
#define Perl_pp_i_ncmp	 Perl_pp_i_cmp
#define Perl_pp_slt	 Perl_pp_s_lt
#define Perl_pp_sgt	 Perl_pp_s_gt
#define Perl_pp_sle	 Perl_pp_s_le
#define Perl_pp_sge	 Perl_pp_s_ge
#define Perl_pp_seq	 Perl_pp_s_eq
#define Perl_pp_sne	 Perl_pp_s_ne
#define Perl_pp_scmp	 Perl_pp_s_cmp
#define Perl_pp_nbit_and Perl_pp_i_bit_and
#define Perl_pp_nbit_xor Perl_pp_i_bit_xor
#define Perl_pp_nbit_or	 Perl_pp_i_bit_or
#define Perl_pp_sbit_and Perl_pp_s_bit_and
#define Perl_pp_sbit_xor Perl_pp_s_bit_xor
#define Perl_pp_sbit_or	 Perl_pp_s_bit_or
#define Perl_pp_ncomplement Perl_pp_i_complement
#define Perl_pp_scomplement Perl_pp_s_complement
#endif

/* ex: set ro: */
