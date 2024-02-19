// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SANDEventDisplayDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "SANDEventDisplay.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_SANDEventDisplay(void *p);
   static void deleteArray_SANDEventDisplay(void *p);
   static void destruct_SANDEventDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SANDEventDisplay*)
   {
      ::SANDEventDisplay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SANDEventDisplay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SANDEventDisplay", ::SANDEventDisplay::Class_Version(), "SANDEventDisplay.h", 47,
                  typeid(::SANDEventDisplay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SANDEventDisplay::Dictionary, isa_proxy, 4,
                  sizeof(::SANDEventDisplay) );
      instance.SetDelete(&delete_SANDEventDisplay);
      instance.SetDeleteArray(&deleteArray_SANDEventDisplay);
      instance.SetDestructor(&destruct_SANDEventDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SANDEventDisplay*)
   {
      return GenerateInitInstanceLocal((::SANDEventDisplay*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SANDEventDisplay*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SANDEventDisplay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SANDEventDisplay::Class_Name()
{
   return "SANDEventDisplay";
}

//______________________________________________________________________________
const char *SANDEventDisplay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDEventDisplay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SANDEventDisplay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDEventDisplay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SANDEventDisplay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDEventDisplay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SANDEventDisplay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDEventDisplay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SANDEventDisplay::Streamer(TBuffer &R__b)
{
   // Stream an object of class SANDEventDisplay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SANDEventDisplay::Class(),this);
   } else {
      R__b.WriteClassBuffer(SANDEventDisplay::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SANDEventDisplay(void *p) {
      delete ((::SANDEventDisplay*)p);
   }
   static void deleteArray_SANDEventDisplay(void *p) {
      delete [] ((::SANDEventDisplay*)p);
   }
   static void destruct_SANDEventDisplay(void *p) {
      typedef ::SANDEventDisplay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SANDEventDisplay

namespace {
  void TriggerDictionaryInitialization_libSANDEventDisplayDict_Impl() {
    static const char* headers[] = {
"SANDEventDisplay.h",
nullptr
    };
    static const char* includePaths[] = {
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include/",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSANDEventDisplayDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$SANDEventDisplay.h")))  SANDEventDisplay;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSANDEventDisplayDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "SANDEventDisplay.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SANDEventDisplay", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSANDEventDisplayDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSANDEventDisplayDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSANDEventDisplayDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSANDEventDisplayDict() {
  TriggerDictionaryInitialization_libSANDEventDisplayDict_Impl();
}
