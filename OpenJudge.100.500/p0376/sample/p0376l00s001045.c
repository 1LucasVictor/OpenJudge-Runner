#include <string.h>

#define _ "\n\tmov"
#define a "q\t%r"
#define b ""_"q\t"
#define c "\n\tj"
#define d ":\n\t"
#define e "\n\tc"
#define f "\n\tp"
#define g ""b"%r"
#define h ""e"mp"
#define i "(%rbx)"
#define j "(%rsp"
#define l ""f"op"a""
#define k ""e"allq\t"
#define q ""f"ushq\t%r"
#define p ""_"l\t"
#define o ", %rax"
#define n ""d"mov"
#define m ""h"b\t$"
#define r ", %r1"
#define t "\n\ttest"
#define s "\n\tadd"
#define w "ax, %"
#define v ", %dl"
#define y ""t a""
#define x ", %rdi"
#define z ""o"\n\t"
#define A "leaq\t"
#define C ", %rdx\n\t"
#define B "allq\t"
#define H "(%r14)"
#define G ""c"e\t"
#define F "retq\nL"
#define E ""j"), %r"
#define D ""_"b\t$"
#define S "\n\txorl\t%"
#define Q "\"ax\",@progbits"
#define P "@function\n"
#define O "pushq\t%r"
#define N ""d".siz"
#define M ", %rsi\n\t"
#define K "\n\n\t.s"
#define J "bx, %r"
#define I ", %eax"
#define Z "bp\n\t"
#define Y ", %rbp"
#define X ""h a""
#define W ""n"q\t"
#define V ""Q"\n\t."
#define T ", %cl"m""
#define _c ""l"bx"l"1"
#define _b ""j")"_""
#define _a "\n\t"A""
#define __ ""c"ne\tL"
#define _i "\n\tud2\nL"
#define _h ", %rcx\n\t"
#define _g ""c"mp\tL"
#define _f "\n\t"F""
#define _e ""K"ection"
#define _d ""p"%e"w""
#define _m ""a"ax, %r"
#define _k "eax, %eax"
#define _l ""d"ud2"_i""
#define _j ""_d"edx"s"b\t$-"
#define _s "\","V"type\t"
#define _r ""_"dqu\t%xmm0, "
#define _q ", %esi"g""
#define _p ""_e"\t.text."
#define _o "di"e B""
#define _n ""I"\n\tadd"
#define _C ""S"ebp, %ebp"
#define _B "__errno_location@PLT"
#define _A ""K"ection\t\".text."
#define _z ""d O Z O""
#define _y "\n\tshlq\t$3"
#define _x "Ln"_"w\t%ax, 40"i""
#define _w ""m"1, %al"c""
#define _v "\n\tshrl\t$8"
#define _t ""d"addb\t%al"
#define _W ""q"14"q"12"q"bx"_ a""
#define _V ""C"sub"a"bp"C"movl\t%r1"
#define _T "@PLT"y"ax, %rax"c"s\tL"
#define _S ""s _m"bp"s _m"bx"X""
#define _Q ""_c"2"l"14"l"15"l Z F""
#define _P "%xmm0, %xmm0"f"shuf"
#define _O "cx"z"imulq\t%r9"g"dx"z"shrq\t$63, %rax\n\tsarq\t$2"C"addq\t%r"w"rdx"s""
#define _N "testq\t%rsi, %rsi"c"ns\tL"
#define _M "@PLT"g"ax, %r14"y"14"r"4"
#define _K "cx\n\timulq\t(%rcx)"z"movq\t%rax, (%rcx)"
#define _J "l"X w"r13"c"le\tLl"_y z""
#define _I ""d O"14"q"bx"q"ax"
#define _H ""g"di, %rbx"m"1, 40"i __""
#define _G ""g"bx"x k _x _w"ne\tL"
#define _F "65, %dl"D"-55"T"26"
#define _E "97"v D"-87"T"25, %dl"c"a\tL"
#define _D "48"v m"10, %al"c"b\tL"
__asm__("\t.text\n\t.file\t\"solutions/AOJ/ITP1/ITP1_6_A.s\"\n\t.section\t.text.Li,"Q"\n\t.type\tLi,"P"Li:"q"bp"q"15"_W"dx, %r15"_ a"si, %rbx"_"l\t%edi, %r12d"S"r14d, %r14d"y"15, %r15"G"LT"_C"\nLj:"_ a"15"_V"2d, %edi"_ a J"si"k"write"_T"o"_S"15"Y c"b\tLj\nLT:"S _k _g"5\nLo:"k _B p"(%rax)"r"4d\n\tshlq\t$32"r"4"p"$1, %eax\nL5"d"or"_m"14"_ a"14"o _Q"E"N"e\tLi, LE-Li"_A"Ln"_s"Ln,"P"Ln"_z"15"_W"di"r"4"b H Y b"8"H o X"bp"o c"ne\tLW"b"16"H r"2"X"12"Y c"ne\tLW"_C g"bp, 8"H y"12"r"2"G"LR"p"32"H r"5d"b"24"H", %rbx"_C"\nLg"n a"12"_V"5d, %edi"g J"si"k"read"_T"9"G"LR"_S"12"Y c"b\tLg\nLR"n a"bp, "H S _k"\nLW"d"cmp"a"bp"o c"ge\tLw"b"24"H", %rcx"_"zbl\t(%rcx,%rax), %ecx\n\tinc"a"ax"g"ax, 8"H"\n\tshll\t$8, %ecx\n\tmovw\t$1, %ax"c"mp\tL8\nLw"d"xorl\t%ecx, %ecx\n\txorl\t%"_k"\nL8"n"zwl\t%"w"eax\n\torl\t%ecx, %eax"_Q"9"d"c"B _B"\n\tud2"_i"e"N"e\tLn, Le-Ln"_A"L0"_s"L0,"P"L0"_z"14"q"bx"p"%esi"r"4d"g"di, %rbx"_"q\t"i o b"8"i C"cmp"a"dx"o c"ne\tLF"p"24"i", %edi"b"16"i Y b"%rbp, %rsi"k"Li"t"l\t%"_k c"ne\tLV"b"$0, "i S _k _g"p\nLF"W"16"i Y"\nLp"n"b\t%r14b, (%rbp,%rax)\n\tinc"a"ax"g"ax, "i _c"4"l Z F"V"_l"O"N"e\tL0, LO-L0"_A"Lx"_s"Lx,"P"Lx"d"subq\t$72, %rsp"y"si"M"setne\t%al"s"b\t$63, %al"y"si"M"movb\t$45, %cl"c"s\tL1"_"b\t$48, %cl\nL1"n"b\t%al, (%rsp)"_"zbl\t%cl, %eax"_"d\t%e"w"xmm0"f"unpcklbw\t"_P"lw\t$0, "_P"d\t$80, %xmm0, %xmm0"_r"49(%rsp)"_r"33(%rsp)"_r"17(%rsp)"_r"1(%rsp)"G"LY"_"b\t$63, %r8b"_"absq\t$7378697629483820647, %r9"g"si, %rcx\nLu"W"%r"_O a"dx"C A"(%rdx,%rdx,4)"C"mov"a"cx"z"sub"a"dx"z _N"k\n\tnegl\t%eax\nLk"n"b\t$"_D"v"D"55"v m"35, %al"c"a\tLX\nLv"_t v _"zbl\t%r8b, %r8d"_"b\t%dl, 1"j",%r8)"g _O"q\t$9"_h"decb\t%r8b"h"q\t$19"_h"mov"a"dx"_h"jae\tLu"p"%r8d"I"\n\tincb\t%al"_"b\t%al, (%rsp)"_g"B\nLY"n"b\t$62, %r8b\nLB"d _N"G"_"b\t%r8b, (%rsp)\nLG"W"%rsp"M"movl\t$65, %edx"k"memcpy@PLT"s"q\t$72, %rsp"_f"X"_l"s"N"e\tLx, Ls-Lx"_p"main,"V"globl\tmain\n\t.type\tmain,"P"main"_z"15"q"14"q"13"q"12"q"bx\n\tsubq\t$168, %rsp"p"$1024, %edi"k"malloc@PLT"y w"rax"c"e\tL4\n\t"A"96"j"), %rbx"_"l\t$0, 32"i p"$1024, %ecx"g"cx, (%rbx)"g"cx, 8"i g"cx, 16"i g"ax, 24"i g J"di"k"Ln"b"32"i _h"mov"a"cx, 80"j")"_"ups\t"i", %xmm0"_"ups\t16"i", %xmm1"_"aps\t%xmm1, 64"j")"_"aps\t%xmm0, 48"_b"w\t%ax, 88"_b"l\t$1024, %edi"k"malloc"_M G"L4\n\tmovl\t$1, 40"j")"S"ebx, %ebx"g"bx, 16"_b"q\t$1024, 24"_b a"14, 32"j")"_a"48"E"di"k"LL"g"sp"Y b"%rbx, (%rbp)"_a"96"j"), %rbx"_"q\t$10, "i b"$1, 8"i g"bp, 16"i g"ax, %rdi"g"bx"M"c"B"LN"b"8"i z"movq\t16"i", %r"_K b"(%rbp)"r"3"y"13"r"3"c"le\tLb"h"q\t$9"r"3"p"$10, %edi"e"movg"a"13"x _y x y"di"x G"Lf"k"malloc"_M __"D\nL4"d"c"B _B _g"l\nLb"W"%r14, %rdi"_g"l4\nLf"d"xorl\t%r14d"r"4d\nLD"d A"(,%r13,8)"C"xorl\t%ebp, %ebp"S"esi"_q"14, %rdi"k"memset@PLT"_a"48"E"15"_a"96"j")"r"2"g"14, %rbx\nL"W"%r15"x k"LL"y J"bx"G"Ll\n\tinc"a"bp"b"$0, "i b"$10, 96"j")"b"$1, 104"_b a"bx, 112"_b a w"rdi"g"12"M"c"B"LN"b"104"E"ax"b"112"E _K s"q\t$8, %rbx"X"13, %r"Z"jl\tL"b"(%rsp)"z"dec"a"ax"c"s\tL"_J"add"a"14, %rax"c"e\tLl"g"14, 8"_b"q\t(%rax)"M A"96"j")"r"5"g"15"x k"Lx"_a"16"E"di"g"15"M"c"B"LI"b"(%rsp), %rbx"h"q\t$2, %rbx"c"l\tLC"b"$-2"Y p"$1"r"4d"_a"16"E"15"_a"96"j")"r"2\nL47"n"l\t$32"_q"15"x k"L0"b"(%rsp)"z"add"a"bp, %rax"c"s\tL"_J"addq\t8"E"ax"G"Ll\n\tinc"a"14"b"(%rax)"M"mov"a"12"x k"Lx"g"15"x g"12"M"c"B"LI\n\tdec"a"bp"X J"14"c"l\tL47\nLC"d A"16"E"bx"_"l\t$10, %esi"g"bx"x k"L0"b"8"E _o"free@PLT"p"24"i", %edi"b"(%rbx)"C"movq\t16"i", %rbx"_ a J"si"k"Li"t"l\t%eax"I __"l"y J"bx"G"L2"g"bx"x"\nLl4"d"c"B"free@PLT\nL2"W"72"E"di"y"di"x G"Lc"k"free@PLT\nLc"d"addq\t$168, %rsp"_c"2"l"13"l"14\n\tpop"a"15"l Z F"l"_l"7"N"e\tmain, L7-main"_p"LL,"V"type\tLL,"P"LL"_I _H"d"_"b\t41"i", %cl"_"absq\t$4294983168, %r14\nLJ"d"cmpb\t$32, %cl"c"a\tLd"_"zbl\t%cl"I"\n\tbtq\t%r"w"r14"c"ae\tLd"_ a J _o _x _d"ecx"_v", %ecx"_w"e\tLJ\nLd"W"%r"J"ax"s"q\t$8, %rsp"_c"4"_f"A"N"e\tLL, LA-LL"_p"LN,"V"type\tLN,"P"LN"_I g"si, %r14"_H"H"_"b\t41"i", %al"m"45, %al"__".\n\tnegq\t8"H _G"H"_v I"\nL."n"l\t%eax, %edx"s"b\t$-48"v D"-48"T"10"v c"b\tLZ"_j _F v c"b\tLZ"_j _E"H\nLZ"_t T"10, %cl"c"ae\tLH\nLP"n"zbl\t%al"_q"14, %r"_o"Lr"_G"q"_v I _j"48"v D"-48"T"10"v c"b\tLM"_j _F v c"b\tLM"_j _E"q\nLM"_t T"9, %cl"c"be\tLP\nLq"d"addq\t$8, %rsp"_c"4"_f"H"_l"a"N"e\tLN, La-LN"_p"LI,"V"type\tLI,"P"LI"d O"15"q"14"q"bx"g"si, %r15"g"di"r"4"_"zbl\t(%r15), %ebx"_g"m\nLS"n"zbl\t1(%r15,%rbx)"_q"14, %r"_o"L0\n\tinc"a"bx\nLm"d"cmpq\t$64, %rbx"__"S"_c"4"l"15"_f"3"N"e\tLI, L3-LI"_e"\t\".text.Lr"_s"Lr,"P"Lr"d"cmpb\t$45, %sil"__"h\n\tnegq\t8(%rdi)"_f"h"W"(%rdi)"_h"movq\t16(%rdi)"x"\n\timulq\t(%rdi)"_h"movl\t%esi"_n"b\t$-48, %al"D"-"_D"Q"p"%esi"_n"b\t$-65, %al"D"-55"v m"26, %al"c"b\tLQ"p"%esi"_n"b\t$-97, %al"D"-87"v m"25, %al"c"a\tLU\nLQ"d"addb\t%sil"v _"zbl\t%dl"_n a"cx, %rax"g"ax, (%rdi)"_f"U"_l"6"N"e\tLr, L6-Lr\n"_e"\t\".note.GNU-stack\",\"\",@progbits\n");