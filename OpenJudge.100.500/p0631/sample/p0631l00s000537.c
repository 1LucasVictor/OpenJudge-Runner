/*

import "core"
import "procon"

fn main() {
  a := read_int()
  b := read_int()
  x := read_int()
  if (a > x) {
    println("NO")
  } elif (a + b >= x) {
    println("YES")
  } else {
    println("NO")
  }
}

main()

*/
#include "stdbool.h"
#include "stdint.h"
bool core_prelude_true;
bool core_prelude_false;
bool core_definitions_is_windows;
bool core_definitions_is_compiletime;
bool core_definitions_is_runtime;
bool core_definitions_is_jscodegen;
#include "math.h"
float core_math_M_PI;
#include "stdio.h"
void* core_pointer_nullGG_() {
void* core_pointer_tmpid39 = ((void*)(0));
return core_pointer_tmpid39;
}
void* core_pointer_null;
char* core_pointer_plusexclGcore_prelude_CharG_core_pointer_Ptr_core_prelude_Char__core_prelude_Int(char* core_pointer_p, int64_t core_pointer_i) {
char* core_pointer_tmpid40 = ((char*)((((int64_t)(core_pointer_p)) + core_pointer_i)));
return core_pointer_tmpid40;
}
char core_string_getGG_core_prelude_CString_core_prelude_Int(char* core_string_cs, int64_t core_string_i) {
char core_string_tmpid41 = (*(core_pointer_plusexclGcore_prelude_CharG_core_pointer_Ptr_core_prelude_Char__core_prelude_Int(((char*)(core_string_cs)), core_string_i)));
return core_string_tmpid41;
}
#include "string.h"
struct core_string_String {
char* p;
int64_t len;
};
char core_string_charGG_core_prelude_Int(int64_t core_string_c) {
char core_string_tmpid44 = ((char)(core_string_c));
return core_string_tmpid44;
}
char core_string_cr;
char core_string_lf;
#include "inttypes.h"
int64_t procon_read_intGG_() {
int64_t procon_ret;
scanf("%" PRId64, &procon_ret);
int64_t procon_tmpid65 = procon_ret;
return procon_tmpid65;
}
struct Array1024_core_prelude_Char { char data[1024]; };
bool procon_is_debug;
void a_mainGG_() {
int64_t a_a = procon_read_intGG_();
int64_t a_b = procon_read_intGG_();
int64_t a_x = procon_read_intGG_();
if ((a_a > a_x)) {
printf("%s", "NO");
;
;
printf("%s", "\n");
;
;
;
} else {if (((a_a + a_b) >= a_x)) {
printf("%s", "YES");
;
;
printf("%s", "\n");
;
;
;
} else {printf("%s", "NO");
;
;
printf("%s", "\n");
;
;
;
}}}

void flori_main() {
core_prelude_true = 1;
core_prelude_false = 0;
core_definitions_is_windows = 
#ifdef _WIN32
#define is_windows true
#elif _WIN64
#define is_windows true
#else
#define is_windows false
#endif
  is_windows;
core_definitions_is_compiletime = 
#ifdef FLORI_COMPILETIME
#define is_compiletime true
#else
#define is_compiletime false
#endif
  is_compiletime;
core_definitions_is_runtime = !(core_definitions_is_compiletime);
core_definitions_is_jscodegen = 
#ifdef FLORI_JSCODEGEN
#define is_jscodegen true
#else
#define is_jscodegen false
#endif
  is_jscodegen;
core_math_M_PI = M_PI;
core_pointer_null = core_pointer_nullGG_();
core_string_cr = core_string_charGG_core_prelude_Int(13);
core_string_lf = core_string_charGG_core_prelude_Int(10);
procon_is_debug = core_prelude_true;
a_mainGG_();
}
int main(int argc, char** argv) { flori_main(); }
