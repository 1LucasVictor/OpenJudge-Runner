/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#include <stdint.h>
#include <math.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif



/* Global Declarations */

/* Types Declarations */

/* Function definitions */

/* Types Definitions */
struct l_array_5_uint8_t {
  uint8_t array[5];
};
struct l_array_6_uint8_t {
  uint8_t array[6];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void);
int scanf(uint8_t*, ...);
int printf(uint8_t*, ...);


/* Global Variable Definitions and Initialization */
static struct l_array_5_uint8_t tmp__23 = { "%lld" };
static struct l_array_5_uint8_t tmp__24 = { "%lld" };
static struct l_array_5_uint8_t tmp__25 = { "%lld" };
static struct l_array_5_uint8_t tmp__26 = { "%lld" };
static struct l_array_6_uint8_t tmp__29 = { "%lld\n" };
static struct l_array_6_uint8_t tmp__28 = { "%lld\n" };
static struct l_array_6_uint8_t tmp__27 = { "%lld\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}


/* Function Bodies */

int main(void) {
  uint64_t llvm_cbe_tmp__1;    /* Address-exposed local */
  int llvm_cbe_tmp__2;
  uint64_t llvm_cbe_tmp__3;    /* Address-exposed local */
  int llvm_cbe_tmp__4;
  uint64_t llvm_cbe_tmp__5;    /* Address-exposed local */
  int llvm_cbe_tmp__6;
  uint64_t llvm_cbe_tmp__7;    /* Address-exposed local */
  int llvm_cbe_tmp__8;
  uint64_t llvm_cbe_tmp__9;
  uint64_t llvm_cbe_tmp__10;
  uint64_t llvm_cbe_tmp__11;
  int llvm_cbe_tmp__12;
  uint64_t llvm_cbe_tmp__13;
  uint64_t llvm_cbe_tmp__14;
  uint64_t llvm_cbe_tmp__15;
  uint64_t llvm_cbe_tmp__16;
  int llvm_cbe_tmp__17;
  uint64_t llvm_cbe_tmp__18;
  uint64_t llvm_cbe_tmp__19;
  uint64_t llvm_cbe_tmp__20;
  uint64_t llvm_cbe_tmp__21;
  int llvm_cbe_tmp__22;

  llvm_cbe_tmp__1 = UINT64_C(100);
  llvm_cbe_tmp__2 = scanf(((&tmp__23.array[((int32_t)0)])), (&llvm_cbe_tmp__1));
  llvm_cbe_tmp__3 = UINT64_C(1);
  llvm_cbe_tmp__4 = scanf(((&tmp__24.array[((int32_t)0)])), (&llvm_cbe_tmp__3));
  llvm_cbe_tmp__5 = UINT64_C(1);
  llvm_cbe_tmp__6 = scanf(((&tmp__25.array[((int32_t)0)])), (&llvm_cbe_tmp__5));
  llvm_cbe_tmp__7 = UINT64_C(3);
  llvm_cbe_tmp__8 = scanf(((&tmp__26.array[((int32_t)0)])), (&llvm_cbe_tmp__7));
  llvm_cbe_tmp__9 = llvm_cbe_tmp__7;
  llvm_cbe_tmp__10 = llvm_cbe_tmp__1;
  if ((((((int64_t)llvm_cbe_tmp__10) >= ((int64_t)llvm_cbe_tmp__9))&1))) {
    goto llvm_cbe_then0;
  } else {
    goto llvm_cbe_else0;
  }

llvm_cbe_then0:
  llvm_cbe_tmp__11 = llvm_cbe_tmp__7;
  llvm_cbe_tmp__12 = printf(((&tmp__27.array[((int32_t)0)])), llvm_cbe_tmp__11);
  goto llvm_cbe_merged0;

llvm_cbe_merged0:
  return 0;
llvm_cbe_else0:
  llvm_cbe_tmp__13 = llvm_cbe_tmp__7;
  llvm_cbe_tmp__14 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__15 = llvm_cbe_tmp__3;
  if ((((((int64_t)(llvm_add_u64(llvm_cbe_tmp__14, llvm_cbe_tmp__15))) >= ((int64_t)llvm_cbe_tmp__13))&1))) {
    goto llvm_cbe_then1;
  } else {
    goto llvm_cbe_else1;
  }

llvm_cbe_then1:
  llvm_cbe_tmp__16 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__17 = printf(((&tmp__28.array[((int32_t)0)])), llvm_cbe_tmp__16);
  goto llvm_cbe_merged1;

llvm_cbe_merged1:
  goto llvm_cbe_merged0;

llvm_cbe_else1:
  llvm_cbe_tmp__18 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__19 = llvm_cbe_tmp__7;
  llvm_cbe_tmp__20 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__21 = llvm_cbe_tmp__3;
  llvm_cbe_tmp__22 = printf(((&tmp__29.array[((int32_t)0)])), (llvm_sub_u64(llvm_cbe_tmp__18, (llvm_sub_u64((llvm_sub_u64(llvm_cbe_tmp__19, llvm_cbe_tmp__20)), llvm_cbe_tmp__21)))));
  goto llvm_cbe_merged1;

}

