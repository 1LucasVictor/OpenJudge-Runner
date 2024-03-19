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
struct l_array_4_uint8_t {
  uint8_t array[4];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void);
int scanf(uint8_t*, ...);
int printf(uint8_t*, ...);


/* Global Variable Definitions and Initialization */
static struct l_array_5_uint8_t tmp__15 = { "%lld" };
static struct l_array_4_uint8_t tmp__21 = { "pon" };
static struct l_array_4_uint8_t tmp__20 = { "%s\n" };
static struct l_array_4_uint8_t tmp__19 = { "bon" };
static struct l_array_4_uint8_t tmp__18 = { "%s\n" };
static struct l_array_4_uint8_t tmp__17 = { "hon" };
static struct l_array_4_uint8_t tmp__16 = { "%s\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_sdiv_u64(int64_t a, int64_t b) {
  uint64_t r = a / b;
  return r;
}


/* Function Bodies */

int main(void) {
  uint64_t llvm_cbe_tmp__1;    /* Address-exposed local */
  int llvm_cbe_tmp__2;
  uint64_t llvm_cbe_tmp__3;    /* Address-exposed local */
  uint64_t llvm_cbe_tmp__4;
  uint64_t llvm_cbe_tmp__5;
  uint64_t llvm_cbe_tmp__6;
  uint64_t llvm_cbe_tmp__7;
  uint64_t llvm_cbe_tmp__8;
  uint64_t llvm_cbe_tmp__9;
  uint64_t llvm_cbe_tmp__10;
  int llvm_cbe_tmp__11;
  uint64_t llvm_cbe_tmp__12;
  int llvm_cbe_tmp__13;
  int llvm_cbe_tmp__14;

  llvm_cbe_tmp__1 = UINT64_C(0);
  llvm_cbe_tmp__2 = scanf(((&tmp__15.array[((int32_t)0)])), (&llvm_cbe_tmp__1));
  llvm_cbe_tmp__3 = UINT64_C(0);
  llvm_cbe_tmp__4 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__5 = llvm_cbe_tmp__1;
  llvm_cbe_tmp__3 = (llvm_sub_u64(llvm_cbe_tmp__4, (llvm_mul_u64((llvm_sdiv_u64(llvm_cbe_tmp__5, UINT64_C(10))), UINT64_C(10)))));
  llvm_cbe_tmp__6 = llvm_cbe_tmp__3;
  llvm_cbe_tmp__7 = llvm_cbe_tmp__3;
  llvm_cbe_tmp__8 = llvm_cbe_tmp__3;
  llvm_cbe_tmp__9 = llvm_cbe_tmp__3;
  llvm_cbe_tmp__10 = llvm_cbe_tmp__3;
  if ((((((((((((((((llvm_cbe_tmp__10 == UINT64_C(2))&1)) | (((llvm_cbe_tmp__9 == UINT64_C(4))&1)))&1)) | (((llvm_cbe_tmp__8 == UINT64_C(5))&1)))&1)) | (((llvm_cbe_tmp__7 == UINT64_C(7))&1)))&1)) | (((llvm_cbe_tmp__6 == UINT64_C(9))&1)))&1))) {
    goto llvm_cbe_then0;
  } else {
    goto llvm_cbe_else0;
  }

llvm_cbe_then0:
  llvm_cbe_tmp__11 = printf(((&tmp__16.array[((int32_t)0)])), ((&tmp__17.array[((int32_t)0)])));
  goto llvm_cbe_merged0;

llvm_cbe_merged0:
  return 0;
llvm_cbe_else0:
  llvm_cbe_tmp__12 = llvm_cbe_tmp__3;
  if ((((llvm_cbe_tmp__12 == UINT64_C(3))&1))) {
    goto llvm_cbe_then1;
  } else {
    goto llvm_cbe_else1;
  }

llvm_cbe_then1:
  llvm_cbe_tmp__13 = printf(((&tmp__18.array[((int32_t)0)])), ((&tmp__19.array[((int32_t)0)])));
  goto llvm_cbe_merged1;

llvm_cbe_merged1:
  goto llvm_cbe_merged0;

llvm_cbe_else1:
  llvm_cbe_tmp__14 = printf(((&tmp__20.array[((int32_t)0)])), ((&tmp__21.array[((int32_t)0)])));
  goto llvm_cbe_merged1;

}

