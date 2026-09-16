// Flat C exports observed in ShellCommonCommonProxyStub.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef SHELLCOMMONCOMMONPROXYSTUB_C_H
#define SHELLCOMMONCOMMONPROXYSTUB_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: GetProxyDllInfo (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // SHELLCOMMONCOMMONPROXYSTUB_C_H
