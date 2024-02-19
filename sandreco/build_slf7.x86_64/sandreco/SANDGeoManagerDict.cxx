// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SANDGeoManagerDict
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
#include "SANDGeoManager.h"
#include "SANDSTTTubeInfo.h"
#include "SANDECALCellInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SANDECALCellInfo(void *p = nullptr);
   static void *newArray_SANDECALCellInfo(Long_t size, void *p);
   static void delete_SANDECALCellInfo(void *p);
   static void deleteArray_SANDECALCellInfo(void *p);
   static void destruct_SANDECALCellInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SANDECALCellInfo*)
   {
      ::SANDECALCellInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SANDECALCellInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SANDECALCellInfo", ::SANDECALCellInfo::Class_Version(), "SANDECALCellInfo.h", 7,
                  typeid(::SANDECALCellInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SANDECALCellInfo::Dictionary, isa_proxy, 4,
                  sizeof(::SANDECALCellInfo) );
      instance.SetNew(&new_SANDECALCellInfo);
      instance.SetNewArray(&newArray_SANDECALCellInfo);
      instance.SetDelete(&delete_SANDECALCellInfo);
      instance.SetDeleteArray(&deleteArray_SANDECALCellInfo);
      instance.SetDestructor(&destruct_SANDECALCellInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SANDECALCellInfo*)
   {
      return GenerateInitInstanceLocal((::SANDECALCellInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SANDECALCellInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SANDSTTTubeInfo(void *p = nullptr);
   static void *newArray_SANDSTTTubeInfo(Long_t size, void *p);
   static void delete_SANDSTTTubeInfo(void *p);
   static void deleteArray_SANDSTTTubeInfo(void *p);
   static void destruct_SANDSTTTubeInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SANDSTTTubeInfo*)
   {
      ::SANDSTTTubeInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SANDSTTTubeInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SANDSTTTubeInfo", ::SANDSTTTubeInfo::Class_Version(), "SANDSTTTubeInfo.h", 7,
                  typeid(::SANDSTTTubeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SANDSTTTubeInfo::Dictionary, isa_proxy, 4,
                  sizeof(::SANDSTTTubeInfo) );
      instance.SetNew(&new_SANDSTTTubeInfo);
      instance.SetNewArray(&newArray_SANDSTTTubeInfo);
      instance.SetDelete(&delete_SANDSTTTubeInfo);
      instance.SetDeleteArray(&deleteArray_SANDSTTTubeInfo);
      instance.SetDestructor(&destruct_SANDSTTTubeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SANDSTTTubeInfo*)
   {
      return GenerateInitInstanceLocal((::SANDSTTTubeInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SANDSTTTubeInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SANDGeoManager(void *p = nullptr);
   static void *newArray_SANDGeoManager(Long_t size, void *p);
   static void delete_SANDGeoManager(void *p);
   static void deleteArray_SANDGeoManager(void *p);
   static void destruct_SANDGeoManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SANDGeoManager*)
   {
      ::SANDGeoManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SANDGeoManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SANDGeoManager", ::SANDGeoManager::Class_Version(), "SANDGeoManager.h", 78,
                  typeid(::SANDGeoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SANDGeoManager::Dictionary, isa_proxy, 4,
                  sizeof(::SANDGeoManager) );
      instance.SetNew(&new_SANDGeoManager);
      instance.SetNewArray(&newArray_SANDGeoManager);
      instance.SetDelete(&delete_SANDGeoManager);
      instance.SetDeleteArray(&deleteArray_SANDGeoManager);
      instance.SetDestructor(&destruct_SANDGeoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SANDGeoManager*)
   {
      return GenerateInitInstanceLocal((::SANDGeoManager*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SANDGeoManager*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SANDECALCellInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SANDECALCellInfo::Class_Name()
{
   return "SANDECALCellInfo";
}

//______________________________________________________________________________
const char *SANDECALCellInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDECALCellInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SANDECALCellInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDECALCellInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SANDECALCellInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDECALCellInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SANDECALCellInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDECALCellInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SANDSTTTubeInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SANDSTTTubeInfo::Class_Name()
{
   return "SANDSTTTubeInfo";
}

//______________________________________________________________________________
const char *SANDSTTTubeInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDSTTTubeInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SANDSTTTubeInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDSTTTubeInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SANDSTTTubeInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDSTTTubeInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SANDSTTTubeInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDSTTTubeInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SANDGeoManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SANDGeoManager::Class_Name()
{
   return "SANDGeoManager";
}

//______________________________________________________________________________
const char *SANDGeoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDGeoManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SANDGeoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SANDGeoManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SANDGeoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDGeoManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SANDGeoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SANDGeoManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SANDECALCellInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class SANDECALCellInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SANDECALCellInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(SANDECALCellInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SANDECALCellInfo(void *p) {
      return  p ? new(p) ::SANDECALCellInfo : new ::SANDECALCellInfo;
   }
   static void *newArray_SANDECALCellInfo(Long_t nElements, void *p) {
      return p ? new(p) ::SANDECALCellInfo[nElements] : new ::SANDECALCellInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_SANDECALCellInfo(void *p) {
      delete ((::SANDECALCellInfo*)p);
   }
   static void deleteArray_SANDECALCellInfo(void *p) {
      delete [] ((::SANDECALCellInfo*)p);
   }
   static void destruct_SANDECALCellInfo(void *p) {
      typedef ::SANDECALCellInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SANDECALCellInfo

//______________________________________________________________________________
void SANDSTTTubeInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class SANDSTTTubeInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SANDSTTTubeInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(SANDSTTTubeInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SANDSTTTubeInfo(void *p) {
      return  p ? new(p) ::SANDSTTTubeInfo : new ::SANDSTTTubeInfo;
   }
   static void *newArray_SANDSTTTubeInfo(Long_t nElements, void *p) {
      return p ? new(p) ::SANDSTTTubeInfo[nElements] : new ::SANDSTTTubeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_SANDSTTTubeInfo(void *p) {
      delete ((::SANDSTTTubeInfo*)p);
   }
   static void deleteArray_SANDSTTTubeInfo(void *p) {
      delete [] ((::SANDSTTTubeInfo*)p);
   }
   static void destruct_SANDSTTTubeInfo(void *p) {
      typedef ::SANDSTTTubeInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SANDSTTTubeInfo

//______________________________________________________________________________
void SANDGeoManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class SANDGeoManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SANDGeoManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(SANDGeoManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SANDGeoManager(void *p) {
      return  p ? new(p) ::SANDGeoManager : new ::SANDGeoManager;
   }
   static void *newArray_SANDGeoManager(Long_t nElements, void *p) {
      return p ? new(p) ::SANDGeoManager[nElements] : new ::SANDGeoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_SANDGeoManager(void *p) {
      delete ((::SANDGeoManager*)p);
   }
   static void deleteArray_SANDGeoManager(void *p) {
      delete [] ((::SANDGeoManager*)p);
   }
   static void destruct_SANDGeoManager(void *p) {
      typedef ::SANDGeoManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SANDGeoManager

namespace ROOT {
   static TClass *maplEintcOmaplEdoublecOintgRsPgR_Dictionary();
   static void maplEintcOmaplEdoublecOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEdoublecOintgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOmaplEdoublecOintgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEdoublecOintgRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEdoublecOintgRsPgR(void *p);
   static void destruct_maplEintcOmaplEdoublecOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<double,int> >*)
   {
      map<int,map<double,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<double,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<double,int> >", -2, "map", 100,
                  typeid(map<int,map<double,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEdoublecOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<double,int> >) );
      instance.SetNew(&new_maplEintcOmaplEdoublecOintgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEdoublecOintgRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEdoublecOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEdoublecOintgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEdoublecOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<double,int> > >()));

      ::ROOT::AddClassAlternate("map<int,map<double,int> >","std::map<int, std::map<double, int, std::less<double>, std::allocator<std::pair<double const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<double, int, std::less<double>, std::allocator<std::pair<double const, int> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,map<double,int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEdoublecOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,map<double,int> >*)nullptr)->GetClass();
      maplEintcOmaplEdoublecOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEdoublecOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEdoublecOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<double,int> > : new map<int,map<double,int> >;
   }
   static void *newArray_maplEintcOmaplEdoublecOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<double,int> >[nElements] : new map<int,map<double,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEdoublecOintgRsPgR(void *p) {
      delete ((map<int,map<double,int> >*)p);
   }
   static void deleteArray_maplEintcOmaplEdoublecOintgRsPgR(void *p) {
      delete [] ((map<int,map<double,int> >*)p);
   }
   static void destruct_maplEintcOmaplEdoublecOintgRsPgR(void *p) {
      typedef map<int,map<double,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,map<double,int> >

namespace ROOT {
   static TClass *maplEintcOSANDSTTTubeInfogR_Dictionary();
   static void maplEintcOSANDSTTTubeInfogR_TClassManip(TClass*);
   static void *new_maplEintcOSANDSTTTubeInfogR(void *p = nullptr);
   static void *newArray_maplEintcOSANDSTTTubeInfogR(Long_t size, void *p);
   static void delete_maplEintcOSANDSTTTubeInfogR(void *p);
   static void deleteArray_maplEintcOSANDSTTTubeInfogR(void *p);
   static void destruct_maplEintcOSANDSTTTubeInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,SANDSTTTubeInfo>*)
   {
      map<int,SANDSTTTubeInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,SANDSTTTubeInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,SANDSTTTubeInfo>", -2, "map", 100,
                  typeid(map<int,SANDSTTTubeInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOSANDSTTTubeInfogR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,SANDSTTTubeInfo>) );
      instance.SetNew(&new_maplEintcOSANDSTTTubeInfogR);
      instance.SetNewArray(&newArray_maplEintcOSANDSTTTubeInfogR);
      instance.SetDelete(&delete_maplEintcOSANDSTTTubeInfogR);
      instance.SetDeleteArray(&deleteArray_maplEintcOSANDSTTTubeInfogR);
      instance.SetDestructor(&destruct_maplEintcOSANDSTTTubeInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,SANDSTTTubeInfo> >()));

      ::ROOT::AddClassAlternate("map<int,SANDSTTTubeInfo>","std::map<int, SANDSTTTubeInfo, std::less<int>, std::allocator<std::pair<int const, SANDSTTTubeInfo> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,SANDSTTTubeInfo>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOSANDSTTTubeInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,SANDSTTTubeInfo>*)nullptr)->GetClass();
      maplEintcOSANDSTTTubeInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOSANDSTTTubeInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOSANDSTTTubeInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,SANDSTTTubeInfo> : new map<int,SANDSTTTubeInfo>;
   }
   static void *newArray_maplEintcOSANDSTTTubeInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,SANDSTTTubeInfo>[nElements] : new map<int,SANDSTTTubeInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOSANDSTTTubeInfogR(void *p) {
      delete ((map<int,SANDSTTTubeInfo>*)p);
   }
   static void deleteArray_maplEintcOSANDSTTTubeInfogR(void *p) {
      delete [] ((map<int,SANDSTTTubeInfo>*)p);
   }
   static void destruct_maplEintcOSANDSTTTubeInfogR(void *p) {
      typedef map<int,SANDSTTTubeInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,SANDSTTTubeInfo>

namespace ROOT {
   static TClass *maplEintcOSANDECALCellInfogR_Dictionary();
   static void maplEintcOSANDECALCellInfogR_TClassManip(TClass*);
   static void *new_maplEintcOSANDECALCellInfogR(void *p = nullptr);
   static void *newArray_maplEintcOSANDECALCellInfogR(Long_t size, void *p);
   static void delete_maplEintcOSANDECALCellInfogR(void *p);
   static void deleteArray_maplEintcOSANDECALCellInfogR(void *p);
   static void destruct_maplEintcOSANDECALCellInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,SANDECALCellInfo>*)
   {
      map<int,SANDECALCellInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,SANDECALCellInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,SANDECALCellInfo>", -2, "map", 100,
                  typeid(map<int,SANDECALCellInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOSANDECALCellInfogR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,SANDECALCellInfo>) );
      instance.SetNew(&new_maplEintcOSANDECALCellInfogR);
      instance.SetNewArray(&newArray_maplEintcOSANDECALCellInfogR);
      instance.SetDelete(&delete_maplEintcOSANDECALCellInfogR);
      instance.SetDeleteArray(&deleteArray_maplEintcOSANDECALCellInfogR);
      instance.SetDestructor(&destruct_maplEintcOSANDECALCellInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,SANDECALCellInfo> >()));

      ::ROOT::AddClassAlternate("map<int,SANDECALCellInfo>","std::map<int, SANDECALCellInfo, std::less<int>, std::allocator<std::pair<int const, SANDECALCellInfo> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,SANDECALCellInfo>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOSANDECALCellInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,SANDECALCellInfo>*)nullptr)->GetClass();
      maplEintcOSANDECALCellInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOSANDECALCellInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOSANDECALCellInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,SANDECALCellInfo> : new map<int,SANDECALCellInfo>;
   }
   static void *newArray_maplEintcOSANDECALCellInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,SANDECALCellInfo>[nElements] : new map<int,SANDECALCellInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOSANDECALCellInfogR(void *p) {
      delete ((map<int,SANDECALCellInfo>*)p);
   }
   static void deleteArray_maplEintcOSANDECALCellInfogR(void *p) {
      delete [] ((map<int,SANDECALCellInfo>*)p);
   }
   static void destruct_maplEintcOSANDECALCellInfogR(void *p) {
      typedef map<int,SANDECALCellInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,SANDECALCellInfo>

namespace ROOT {
   static TClass *maplEdoublecOintgR_Dictionary();
   static void maplEdoublecOintgR_TClassManip(TClass*);
   static void *new_maplEdoublecOintgR(void *p = nullptr);
   static void *newArray_maplEdoublecOintgR(Long_t size, void *p);
   static void delete_maplEdoublecOintgR(void *p);
   static void deleteArray_maplEdoublecOintgR(void *p);
   static void destruct_maplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,int>*)
   {
      map<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,int>", -2, "map", 100,
                  typeid(map<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,int>) );
      instance.SetNew(&new_maplEdoublecOintgR);
      instance.SetNewArray(&newArray_maplEdoublecOintgR);
      instance.SetDelete(&delete_maplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOintgR);
      instance.SetDestructor(&destruct_maplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,int> >()));

      ::ROOT::AddClassAlternate("map<double,int>","std::map<double, int, std::less<double>, std::allocator<std::pair<double const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,int>*)nullptr)->GetClass();
      maplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,int> : new map<double,int>;
   }
   static void *newArray_maplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,int>[nElements] : new map<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOintgR(void *p) {
      delete ((map<double,int>*)p);
   }
   static void deleteArray_maplEdoublecOintgR(void *p) {
      delete [] ((map<double,int>*)p);
   }
   static void destruct_maplEdoublecOintgR(void *p) {
      typedef map<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,int>

namespace {
  void TriggerDictionaryInitialization_libSANDGeoManager_Impl() {
    static const char* headers[] = {
"SANDGeoManager.h",
"SANDSTTTubeInfo.h",
"SANDECALCellInfo.h",
nullptr
    };
    static const char* includePaths[] = {
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include",
"/cvmfs/dune.opensciencegrid.org/products/dune/edepsim/v3_2_0b/Linux64bit+3.10-2.17-e20-prof/include/EDepSim",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include/",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSANDGeoManager dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$SANDECALCellInfo.h")))  __attribute__((annotate("$clingAutoload$SANDGeoManager.h")))  SANDECALCellInfo;
class __attribute__((annotate("$clingAutoload$SANDSTTTubeInfo.h")))  __attribute__((annotate("$clingAutoload$SANDGeoManager.h")))  SANDSTTTubeInfo;
class __attribute__((annotate("$clingAutoload$SANDGeoManager.h")))  SANDGeoManager;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSANDGeoManager dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "SANDGeoManager.h"
#include "SANDSTTTubeInfo.h"
#include "SANDECALCellInfo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SANDECALCellInfo", payloadCode, "@",
"SANDGeoManager", payloadCode, "@",
"SANDSTTTubeInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSANDGeoManager",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSANDGeoManager_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSANDGeoManager_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSANDGeoManager() {
  TriggerDictionaryInitialization_libSANDGeoManager_Impl();
}
