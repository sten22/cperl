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
	OP_SASSIGN	 = 14,
	OP_AASSIGN	 = 15,
	OP_CHOP		 = 16,
	OP_SCHOP	 = 17,
	OP_CHOMP	 = 18,
	OP_SCHOMP	 = 19,
	OP_DEFINED	 = 20,
	OP_UNDEF	 = 21,
	OP_STUDY	 = 22,
	OP_POS		 = 23,
	OP_PREINC	 = 24,
	OP_I_PREINC	 = 25,
	OP_PREDEC	 = 26,
	OP_I_PREDEC	 = 27,
	OP_POSTINC	 = 28,
	OP_I_POSTINC	 = 29,
	OP_POSTDEC	 = 30,
	OP_I_POSTDEC	 = 31,
	OP_MULTIPLY	 = 32,
	OP_I_MULTIPLY	 = 33,
	OP_U_MULTIPLY	 = 34,
	OP_DIVIDE	 = 35,
	OP_I_DIVIDE	 = 36,
	OP_MODULO	 = 37,
	OP_I_MODULO	 = 38,
	OP_REPEAT	 = 39,
	OP_ADD		 = 40,
	OP_I_ADD	 = 41,
	OP_U_ADD	 = 42,
	OP_SUBTRACT	 = 43,
	OP_I_SUBTRACT	 = 44,
	OP_U_SUBTRACT	 = 45,
	OP_CONCAT	 = 46,
	OP_STRINGIFY	 = 47,
	OP_POW		 = 48,
	OP_I_POW	 = 49,
	OP_LEFT_SHIFT	 = 50,
	OP_RIGHT_SHIFT	 = 51,
	OP_LT		 = 52,
	OP_I_LT		 = 53,
	OP_GT		 = 54,
	OP_I_GT		 = 55,
	OP_LE		 = 56,
	OP_I_LE		 = 57,
	OP_GE		 = 58,
	OP_I_GE		 = 59,
	OP_EQ		 = 60,
	OP_I_EQ		 = 61,
	OP_NE		 = 62,
	OP_I_NE		 = 63,
	OP_CMP		 = 64,
	OP_I_CMP	 = 65,
	OP_S_LT		 = 66,
	OP_S_GT		 = 67,
	OP_S_LE		 = 68,
	OP_S_GE		 = 69,
	OP_S_EQ		 = 70,
	OP_S_NE		 = 71,
	OP_S_CMP	 = 72,
	OP_BIT_AND	 = 73,
	OP_BIT_XOR	 = 74,
	OP_BIT_OR	 = 75,
	OP_I_BIT_AND	 = 76,
	OP_I_BIT_XOR	 = 77,
	OP_I_BIT_OR	 = 78,
	OP_S_BIT_AND	 = 79,
	OP_S_BIT_XOR	 = 80,
	OP_S_BIT_OR	 = 81,
	OP_NEGATE	 = 82,
	OP_I_NEGATE	 = 83,
	OP_NOT		 = 84,
	OP_COMPLEMENT	 = 85,
	OP_I_COMPLEMENT	 = 86,
	OP_S_COMPLEMENT	 = 87,
	OP_SMARTMATCH	 = 88,
	OP_ATAN2	 = 89,
	OP_SIN		 = 90,
	OP_COS		 = 91,
	OP_RAND		 = 92,
	OP_SRAND	 = 93,
	OP_EXP		 = 94,
	OP_LOG		 = 95,
	OP_SQRT		 = 96,
	OP_INT		 = 97,
	OP_HEX		 = 98,
	OP_OCT		 = 99,
	OP_ABS		 = 100,
	OP_RV2GV	 = 101,
	OP_RV2SV	 = 102,
	OP_AV2ARYLEN	 = 103,
	OP_RV2CV	 = 104,
	OP_ANONCODE	 = 105,
	OP_PROTOTYPE	 = 106,
	OP_REFGEN	 = 107,
	OP_SREFGEN	 = 108,
	OP_REF		 = 109,
	OP_BLESS	 = 110,
	OP_BACKTICK	 = 111,
	OP_GLOB		 = 112,
	OP_READLINE	 = 113,
	OP_RCATLINE	 = 114,
	OP_REGCMAYBE	 = 115,
	OP_REGCRESET	 = 116,
	OP_REGCOMP	 = 117,
	OP_MATCH	 = 118,
	OP_QR		 = 119,
	OP_SUBST	 = 120,
	OP_SUBSTCONT	 = 121,
	OP_TRANS	 = 122,
	OP_TRANSR	 = 123,
	OP_LENGTH	 = 124,
	OP_SUBSTR	 = 125,
	OP_VEC		 = 126,
	OP_INDEX	 = 127,
	OP_RINDEX	 = 128,
	OP_SPRINTF	 = 129,
	OP_FORMLINE	 = 130,
	OP_ORD		 = 131,
	OP_CHR		 = 132,
	OP_CRYPT	 = 133,
	OP_UCFIRST	 = 134,
	OP_LCFIRST	 = 135,
	OP_UC		 = 136,
	OP_LC		 = 137,
	OP_QUOTEMETA	 = 138,
	OP_RV2AV	 = 139,
	OP_AELEMFAST	 = 140,
	OP_AELEMFAST_LEX = 141,
	OP_AELEM	 = 142,
	OP_I_AELEM	 = 143,
	OP_N_AELEM	 = 144,
	OP_S_AELEM	 = 145,
	OP_AELEMFAST_LEX_U = 146,
	OP_AELEM_U	 = 147,
	OP_I_AELEM_U	 = 148,
	OP_N_AELEM_U	 = 149,
	OP_S_AELEM_U	 = 150,
	OP_ASLICE	 = 151,
	OP_KVASLICE	 = 152,
	OP_AEACH	 = 153,
	OP_AKEYS	 = 154,
	OP_AVALUES	 = 155,
	OP_EACH		 = 156,
	OP_VALUES	 = 157,
	OP_KEYS		 = 158,
	OP_DELETE	 = 159,
	OP_EXISTS	 = 160,
	OP_RV2HV	 = 161,
	OP_HELEM	 = 162,
	OP_HSLICE	 = 163,
	OP_KVHSLICE	 = 164,
	OP_MULTIDEREF	 = 165,
	OP_UNPACK	 = 166,
	OP_PACK		 = 167,
	OP_SPLIT	 = 168,
	OP_JOIN		 = 169,
	OP_LIST		 = 170,
	OP_LSLICE	 = 171,
	OP_ANONLIST	 = 172,
	OP_ANONHASH	 = 173,
	OP_SPLICE	 = 174,
	OP_PUSH		 = 175,
	OP_POP		 = 176,
	OP_SHIFT	 = 177,
	OP_UNSHIFT	 = 178,
	OP_SORT		 = 179,
	OP_REVERSE	 = 180,
	OP_GREPSTART	 = 181,
	OP_GREPWHILE	 = 182,
	OP_MAPSTART	 = 183,
	OP_MAPWHILE	 = 184,
	OP_RANGE	 = 185,
	OP_FLIP		 = 186,
	OP_FLOP		 = 187,
	OP_AND		 = 188,
	OP_OR		 = 189,
	OP_XOR		 = 190,
	OP_DOR		 = 191,
	OP_COND_EXPR	 = 192,
	OP_ANDASSIGN	 = 193,
	OP_ORASSIGN	 = 194,
	OP_DORASSIGN	 = 195,
	OP_METHOD	 = 196,
	OP_ENTERSUB	 = 197,
	OP_ENTERXSSUB	 = 198,
	OP_LEAVESUB	 = 199,
	OP_LEAVESUBLV	 = 200,
	OP_SIGNATURE	 = 201,
	OP_CALLER	 = 202,
	OP_WARN		 = 203,
	OP_DIE		 = 204,
	OP_RESET	 = 205,
	OP_LINESEQ	 = 206,
	OP_NEXTSTATE	 = 207,
	OP_SETSTATE	 = 208,
	OP_KEEPSTATE	 = 209,
	OP_DBSTATE	 = 210,
	OP_UNSTACK	 = 211,
	OP_ENTER	 = 212,
	OP_LEAVE	 = 213,
	OP_SCOPE	 = 214,
	OP_ENTERITER	 = 215,
	OP_ITER		 = 216,
	OP_ITER_ARY	 = 217,
	OP_ITER_LAZYIV	 = 218,
	OP_ENTERLOOP	 = 219,
	OP_LEAVELOOP	 = 220,
	OP_RETURN	 = 221,
	OP_LAST		 = 222,
	OP_NEXT		 = 223,
	OP_REDO		 = 224,
	OP_DUMP		 = 225,
	OP_GOTO		 = 226,
	OP_EXIT		 = 227,
	OP_METHOD_NAMED	 = 228,
	OP_METHOD_SUPER	 = 229,
	OP_METHOD_REDIR	 = 230,
	OP_METHOD_REDIR_SUPER = 231,
	OP_ENTERGIVEN	 = 232,
	OP_LEAVEGIVEN	 = 233,
	OP_ENTERWHEN	 = 234,
	OP_LEAVEWHEN	 = 235,
	OP_BREAK	 = 236,
	OP_CONTINUE	 = 237,
	OP_OPEN		 = 238,
	OP_CLOSE	 = 239,
	OP_PIPE_OP	 = 240,
	OP_FILENO	 = 241,
	OP_UMASK	 = 242,
	OP_BINMODE	 = 243,
	OP_TIE		 = 244,
	OP_UNTIE	 = 245,
	OP_TIED		 = 246,
	OP_DBMOPEN	 = 247,
	OP_DBMCLOSE	 = 248,
	OP_SSELECT	 = 249,
	OP_SELECT	 = 250,
	OP_GETC		 = 251,
	OP_READ		 = 252,
	OP_ENTERWRITE	 = 253,
	OP_LEAVEWRITE	 = 254,
	OP_PRTF		 = 255,
	OP_PRINT	 = 256,
	OP_SAY		 = 257,
	OP_SYSOPEN	 = 258,
	OP_SYSSEEK	 = 259,
	OP_SYSREAD	 = 260,
	OP_SYSWRITE	 = 261,
	OP_EOF		 = 262,
	OP_TELL		 = 263,
	OP_SEEK		 = 264,
	OP_TRUNCATE	 = 265,
	OP_FCNTL	 = 266,
	OP_IOCTL	 = 267,
	OP_FLOCK	 = 268,
	OP_SEND		 = 269,
	OP_RECV		 = 270,
	OP_SOCKET	 = 271,
	OP_SOCKPAIR	 = 272,
	OP_BIND		 = 273,
	OP_CONNECT	 = 274,
	OP_LISTEN	 = 275,
	OP_ACCEPT	 = 276,
	OP_SHUTDOWN	 = 277,
	OP_GSOCKOPT	 = 278,
	OP_SSOCKOPT	 = 279,
	OP_GETSOCKNAME	 = 280,
	OP_GETPEERNAME	 = 281,
	OP_LSTAT	 = 282,
	OP_STAT		 = 283,
	OP_FTRREAD	 = 284,
	OP_FTRWRITE	 = 285,
	OP_FTREXEC	 = 286,
	OP_FTEREAD	 = 287,
	OP_FTEWRITE	 = 288,
	OP_FTEEXEC	 = 289,
	OP_FTIS		 = 290,
	OP_FTSIZE	 = 291,
	OP_FTMTIME	 = 292,
	OP_FTATIME	 = 293,
	OP_FTCTIME	 = 294,
	OP_FTROWNED	 = 295,
	OP_FTEOWNED	 = 296,
	OP_FTZERO	 = 297,
	OP_FTSOCK	 = 298,
	OP_FTCHR	 = 299,
	OP_FTBLK	 = 300,
	OP_FTFILE	 = 301,
	OP_FTDIR	 = 302,
	OP_FTPIPE	 = 303,
	OP_FTSUID	 = 304,
	OP_FTSGID	 = 305,
	OP_FTSVTX	 = 306,
	OP_FTLINK	 = 307,
	OP_FTTTY	 = 308,
	OP_FTTEXT	 = 309,
	OP_FTBINARY	 = 310,
	OP_CHDIR	 = 311,
	OP_CHOWN	 = 312,
	OP_CHROOT	 = 313,
	OP_UNLINK	 = 314,
	OP_CHMOD	 = 315,
	OP_UTIME	 = 316,
	OP_RENAME	 = 317,
	OP_LINK		 = 318,
	OP_SYMLINK	 = 319,
	OP_READLINK	 = 320,
	OP_MKDIR	 = 321,
	OP_RMDIR	 = 322,
	OP_OPEN_DIR	 = 323,
	OP_READDIR	 = 324,
	OP_TELLDIR	 = 325,
	OP_SEEKDIR	 = 326,
	OP_REWINDDIR	 = 327,
	OP_CLOSEDIR	 = 328,
	OP_FORK		 = 329,
	OP_WAIT		 = 330,
	OP_WAITPID	 = 331,
	OP_SYSTEM	 = 332,
	OP_EXEC		 = 333,
	OP_KILL		 = 334,
	OP_GETPPID	 = 335,
	OP_GETPGRP	 = 336,
	OP_SETPGRP	 = 337,
	OP_GETPRIORITY	 = 338,
	OP_SETPRIORITY	 = 339,
	OP_TIME		 = 340,
	OP_TMS		 = 341,
	OP_LOCALTIME	 = 342,
	OP_GMTIME	 = 343,
	OP_ALARM	 = 344,
	OP_SLEEP	 = 345,
	OP_SHMGET	 = 346,
	OP_SHMCTL	 = 347,
	OP_SHMREAD	 = 348,
	OP_SHMWRITE	 = 349,
	OP_MSGGET	 = 350,
	OP_MSGCTL	 = 351,
	OP_MSGSND	 = 352,
	OP_MSGRCV	 = 353,
	OP_SEMOP	 = 354,
	OP_SEMGET	 = 355,
	OP_SEMCTL	 = 356,
	OP_REQUIRE	 = 357,
	OP_DOFILE	 = 358,
	OP_HINTSEVAL	 = 359,
	OP_ENTEREVAL	 = 360,
	OP_LEAVEEVAL	 = 361,
	OP_ENTERTRY	 = 362,
	OP_LEAVETRY	 = 363,
	OP_GHBYNAME	 = 364,
	OP_GHBYADDR	 = 365,
	OP_GHOSTENT	 = 366,
	OP_GNBYNAME	 = 367,
	OP_GNBYADDR	 = 368,
	OP_GNETENT	 = 369,
	OP_GPBYNAME	 = 370,
	OP_GPBYNUMBER	 = 371,
	OP_GPROTOENT	 = 372,
	OP_GSBYNAME	 = 373,
	OP_GSBYPORT	 = 374,
	OP_GSERVENT	 = 375,
	OP_SHOSTENT	 = 376,
	OP_SNETENT	 = 377,
	OP_SPROTOENT	 = 378,
	OP_SSERVENT	 = 379,
	OP_EHOSTENT	 = 380,
	OP_ENETENT	 = 381,
	OP_EPROTOENT	 = 382,
	OP_ESERVENT	 = 383,
	OP_GPWNAM	 = 384,
	OP_GPWUID	 = 385,
	OP_GPWENT	 = 386,
	OP_SPWENT	 = 387,
	OP_EPWENT	 = 388,
	OP_GGRNAM	 = 389,
	OP_GGRGID	 = 390,
	OP_GGRENT	 = 391,
	OP_SGRENT	 = 392,
	OP_EGRENT	 = 393,
	OP_GETLOGIN	 = 394,
	OP_SYSCALL	 = 395,
	OP_LOCK		 = 396,
	OP_ONCE		 = 397,
	OP_CUSTOM	 = 398,
	OP_COREARGS	 = 399,
	OP_RUNCV	 = 400,
	OP_FC		 = 401,
	OP_PADCV	 = 402,
	OP_INTROCV	 = 403,
	OP_CLONECV	 = 404,
	OP_PADRANGE	 = 405,
	OP_REFASSIGN	 = 406,
	OP_LVREF	 = 407,
	OP_LVREFSLICE	 = 408,
	OP_LVAVREF	 = 409,
	OP_ANONCONST	 = 410,
	OP_max		
} opcode;

#define MAXO 411
#define OP_FREED MAXO

/* PL_opargs encoding */

/* Lowest 10 bits of PL_opargs */
#define OA_MARK	1
#define OA_FOLDCONST	2
#define OA_RETSCALAR	4
#define OA_TARGET	8
#define OA_TARGLEX	24
#define OA_OTHERINT	32
#define OA_DANGEROUS	64
#define OA_DEFGV	128
#define OA_PURE	256
#define OA_BOXRET	512

/* The next 4 bits (10..13) encode op class information */
#define OCSHIFT 10

/* Each remaining 4bit nybbles of PL_opargs (i.e. bits 14..17, 18..21 etc)
 * encode the type for each arg */
#define OASHIFT 14

/* arg types */
#define OA_SCALAR  1
#define OA_LIST    2
#define OA_AVREF   3
#define OA_HVREF   4
#define OA_CVREF   5
#define OA_FILEREF 6
#define OA_SCALARREF 7
#define OA_OPTIONAL 8

/* 0b0011_1100_0000_0000 / 0xf000 */
#define OA_CLASS_MASK (0xf << OCSHIFT)

#define OA_BASEOP 	(0 << OCSHIFT)
#define OA_UNOP 	(1 << OCSHIFT)
#define OA_BINOP 	(2 << OCSHIFT)
#define OA_LOGOP 	(3 << OCSHIFT)
#define OA_LISTOP 	(4 << OCSHIFT)
#define OA_PMOP 	(5 << OCSHIFT)
#define OA_SVOP 	(6 << OCSHIFT)
#define OA_PADOP 	(7 << OCSHIFT)
#define OA_PVOP_OR_SVOP (8 << OCSHIFT)
#define OA_LOOP 	(9 << OCSHIFT)
#define OA_COP 		(10 << OCSHIFT)
#define OA_BASEOP_OR_UNOP (11 << OCSHIFT)
#define OA_FILESTATOP 	(12 << OCSHIFT)
#define OA_LOOPEXOP 	(13 << OCSHIFT)
#define OA_METHOP 	(14 << OCSHIFT)
#define OA_UNOP_AUX 	(15 << OCSHIFT)


#define OP_HAS_TARGLEX(ot) ((PL_opargs[ot] & OA_TARGLEX) == OA_TARGLEX)

#define OpCLASS(ot)      (PL_opargs[(ot)] & OA_CLASS_MASK)
#define OP_IS_BASEOP(ot) (OpCLASS(ot) == OA_BASEOP || OpCLASS(ot) == OA_BASEOP_OR_UNOP)
#define OP_IS_UNOP(ot)   (OpCLASS(ot) == OA_UNOP || OpCLASS(ot) == OA_BASEOP_OR_UNOP)
#define OP_IS_BINOP(ot)  OpCLASS(ot) == OA_BINOP
#define OP_IS_LOGOP(ot)  OpCLASS(ot) == OA_LOGOP
#define OP_IS_LISTOP(ot) OpCLASS(ot) == OA_LISTOP
#define OP_IS_PMOP(ot)   OpCLASS(ot) == OA_PMOP
#define OP_IS_SVOP(ot)   (OpCLASS(ot) == OA_SVOP || OpCLASS(ot) == OA_PVOP_OR_SVOP)
#define OP_IS_PADOP(ot)  OpCLASS(ot) == OA_PADOP
#define OP_IS_LOOP(ot)   OpCLASS(ot) == OA_LOOP
#define OP_IS_COP(ot)    OpCLASS(ot) == OA_COP
#define OP_IS_FILESTATOP(ot) OpCLASS(ot) == OA_FILESTATOP
#define OP_IS_METHOP(ot) OpCLASS(ot) == OA_METHOP

/* The other OP_IS_* macros are optimized to a simple range check because
   all the member OPs are contiguous in regen/opcodes table.
   regen/opcode.pl verifies the range contiguity, or generates an OR-equals
   expression */

#define OP_HAS_LIST(ot)	\
	((ot) == OP_AASSIGN || \
	 (ot) == OP_ANONHASH || \
	 (ot) == OP_ANONLIST || \
	 (ot) == OP_ASLICE || \
	 (ot) == OP_CHMOD || \
	 (ot) == OP_CHOMP || \
	 (ot) == OP_CHOP || \
	 (ot) == OP_CHOWN || \
	 (ot) == OP_DIE || \
	 (ot) == OP_ENTERSUB || \
	 (ot) == OP_ENTERXSSUB || \
	 (ot) == OP_EXEC || \
	 (ot) == OP_FORMLINE || \
	 (ot) == OP_GREPSTART || \
	 (ot) == OP_HSLICE || \
	 (ot) == OP_JOIN || \
	 (ot) == OP_KILL || \
	 (ot) == OP_KVASLICE || \
	 (ot) == OP_KVHSLICE || \
	 (ot) == OP_LIST || \
	 (ot) == OP_LSLICE || \
	 (ot) == OP_MAPSTART || \
	 (ot) == OP_OPEN || \
	 (ot) == OP_PACK || \
	 (ot) == OP_PRINT || \
	 (ot) == OP_PRTF || \
	 (ot) == OP_PUSH || \
	 (ot) == OP_REFGEN || \
	 (ot) == OP_REPEAT || \
	 (ot) == OP_RETURN || \
	 (ot) == OP_REVERSE || \
	 (ot) == OP_SAY || \
	 (ot) == OP_SORT || \
	 (ot) == OP_SPLICE || \
	 (ot) == OP_SPRINTF || \
	 (ot) == OP_SYSCALL || \
	 (ot) == OP_SYSTEM || \
	 (ot) == OP_TIE || \
	 (ot) == OP_UNLINK || \
	 (ot) == OP_UNSHIFT || \
	 (ot) == OP_UTIME || \
	 (ot) == OP_WARN)

#define OP_IS_SOCKET(ot)	\
	((ot) >= OP_SEND && (ot) <= OP_GETPEERNAME)

#define OP_IS_FILETEST(ot)	\
	((ot) >= OP_FTRREAD && (ot) <= OP_FTBINARY)

#define OP_IS_FILETEST_ACCESS(ot)	\
	((ot) >= OP_FTRREAD && (ot) <= OP_FTEEXEC)

#define OP_IS_NUMCOMPARE(ot)	\
	((ot) >= OP_LT && (ot) <= OP_I_CMP)

#define OP_IS_DIRHOP(ot)	\
	((ot) >= OP_READDIR && (ot) <= OP_CLOSEDIR)

#define OP_IS_INFIX_BIT(ot)	\
	((ot) >= OP_BIT_AND && (ot) <= OP_S_BIT_OR)

#define OP_IS_PADVAR(ot)	\
	((ot) >= OP_PADSV && (ot) <= OP_PADANY)

#define OP_IS_ITER(ot)	\
	((ot) >= OP_ITER && (ot) <= OP_ITER_LAZYIV)

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
