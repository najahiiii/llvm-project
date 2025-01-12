//===-- NVPTX specific declarations for math support ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_MATH_GPU_NVPTX_DECLARATIONS_H
#define LLVM_LIBC_SRC_MATH_GPU_NVPTX_DECLARATIONS_H

namespace __llvm_libc {

extern "C" {
float __nv_acosf(float);
float __nv_acoshf(float);
float __nv_asinf(float);
float __nv_asinhf(float);
float __nv_atanf(float);
float __nv_atanhf(float);
double __nv_cos(double);
float __nv_cosf(float);
double __nv_cosh(double);
float __nv_coshf(float);
float __nv_expf(float);
float __nv_exp2f(float);
float __nv_exp10f(float);
float __nv_expm1f(float);
double __nv_fdim(double, double);
float __nv_fdimf(float, float);
double __nv_hypot(double, double);
float __nv_hypotf(float, float);
int __nv_ilogb(double);
int __nv_ilogbf(float);
double __nv_ldexp(double, int);
float __nv_ldexpf(float, int);
long long __nv_llrint(double);
long long __nv_llrintf(float);
long long __nv_llround(double);
long long __nv_llroundf(float);
double __nv_pow(double, double);
float __nv_powf(float, float);
double __nv_sin(double);
}

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_MATH_GPU_NVPTX_DECLARATIONS_H
