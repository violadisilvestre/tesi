// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME StructDict
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
#include "struct.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *pe_Dictionary();
   static void pe_TClassManip(TClass*);
   static void *new_pe(void *p = nullptr);
   static void *newArray_pe(Long_t size, void *p);
   static void delete_pe(void *p);
   static void deleteArray_pe(void *p);
   static void destruct_pe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pe*)
   {
      ::pe *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pe));
      static ::ROOT::TGenericClassInfo 
         instance("pe", "struct.h", 9,
                  typeid(::pe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pe_Dictionary, isa_proxy, 4,
                  sizeof(::pe) );
      instance.SetNew(&new_pe);
      instance.SetNewArray(&newArray_pe);
      instance.SetDelete(&delete_pe);
      instance.SetDeleteArray(&deleteArray_pe);
      instance.SetDestructor(&destruct_pe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pe*)
   {
      return GenerateInitInstanceLocal((::pe*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::pe*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pe_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pe*)nullptr)->GetClass();
      pe_TClassManip(theClass);
   return theClass;
   }

   static void pe_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *dg_ps_Dictionary();
   static void dg_ps_TClassManip(TClass*);
   static void *new_dg_ps(void *p = nullptr);
   static void *newArray_dg_ps(Long_t size, void *p);
   static void delete_dg_ps(void *p);
   static void deleteArray_dg_ps(void *p);
   static void destruct_dg_ps(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dg_ps*)
   {
      ::dg_ps *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::dg_ps));
      static ::ROOT::TGenericClassInfo 
         instance("dg_ps", "struct.h", 31,
                  typeid(::dg_ps), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dg_ps_Dictionary, isa_proxy, 4,
                  sizeof(::dg_ps) );
      instance.SetNew(&new_dg_ps);
      instance.SetNewArray(&newArray_dg_ps);
      instance.SetDelete(&delete_dg_ps);
      instance.SetDeleteArray(&deleteArray_dg_ps);
      instance.SetDestructor(&destruct_dg_ps);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dg_ps*)
   {
      return GenerateInitInstanceLocal((::dg_ps*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::dg_ps*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dg_ps_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::dg_ps*)nullptr)->GetClass();
      dg_ps_TClassManip(theClass);
   return theClass;
   }

   static void dg_ps_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *dg_cell_Dictionary();
   static void dg_cell_TClassManip(TClass*);
   static void *new_dg_cell(void *p = nullptr);
   static void *newArray_dg_cell(Long_t size, void *p);
   static void delete_dg_cell(void *p);
   static void deleteArray_dg_cell(void *p);
   static void destruct_dg_cell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dg_cell*)
   {
      ::dg_cell *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::dg_cell));
      static ::ROOT::TGenericClassInfo 
         instance("dg_cell", "struct.h", 38,
                  typeid(::dg_cell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dg_cell_Dictionary, isa_proxy, 4,
                  sizeof(::dg_cell) );
      instance.SetNew(&new_dg_cell);
      instance.SetNewArray(&newArray_dg_cell);
      instance.SetDelete(&delete_dg_cell);
      instance.SetDeleteArray(&deleteArray_dg_cell);
      instance.SetDestructor(&destruct_dg_cell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dg_cell*)
   {
      return GenerateInitInstanceLocal((::dg_cell*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::dg_cell*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dg_cell_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::dg_cell*)nullptr)->GetClass();
      dg_cell_TClassManip(theClass);
   return theClass;
   }

   static void dg_cell_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *dg_tube_Dictionary();
   static void dg_tube_TClassManip(TClass*);
   static void *new_dg_tube(void *p = nullptr);
   static void *newArray_dg_tube(Long_t size, void *p);
   static void delete_dg_tube(void *p);
   static void deleteArray_dg_tube(void *p);
   static void destruct_dg_tube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dg_tube*)
   {
      ::dg_tube *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::dg_tube));
      static ::ROOT::TGenericClassInfo 
         instance("dg_tube", "struct.h", 52,
                  typeid(::dg_tube), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dg_tube_Dictionary, isa_proxy, 4,
                  sizeof(::dg_tube) );
      instance.SetNew(&new_dg_tube);
      instance.SetNewArray(&newArray_dg_tube);
      instance.SetDelete(&delete_dg_tube);
      instance.SetDeleteArray(&deleteArray_dg_tube);
      instance.SetDestructor(&destruct_dg_tube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dg_tube*)
   {
      return GenerateInitInstanceLocal((::dg_tube*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::dg_tube*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dg_tube_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::dg_tube*)nullptr)->GetClass();
      dg_tube_TClassManip(theClass);
   return theClass;
   }

   static void dg_tube_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *cluster_Dictionary();
   static void cluster_TClassManip(TClass*);
   static void *new_cluster(void *p = nullptr);
   static void *newArray_cluster(Long_t size, void *p);
   static void delete_cluster(void *p);
   static void deleteArray_cluster(void *p);
   static void destruct_cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster*)
   {
      ::cluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster));
      static ::ROOT::TGenericClassInfo 
         instance("cluster", "struct.h", 66,
                  typeid(::cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &cluster_Dictionary, isa_proxy, 4,
                  sizeof(::cluster) );
      instance.SetNew(&new_cluster);
      instance.SetNewArray(&newArray_cluster);
      instance.SetDelete(&delete_cluster);
      instance.SetDeleteArray(&deleteArray_cluster);
      instance.SetDestructor(&destruct_cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster*)
   {
      return GenerateInitInstanceLocal((::cluster*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::cluster*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *cluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster*)nullptr)->GetClass();
      cluster_TClassManip(theClass);
   return theClass;
   }

   static void cluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *track_Dictionary();
   static void track_TClassManip(TClass*);
   static void *new_track(void *p = nullptr);
   static void *newArray_track(Long_t size, void *p);
   static void delete_track(void *p);
   static void deleteArray_track(void *p);
   static void destruct_track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::track*)
   {
      ::track *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::track));
      static ::ROOT::TGenericClassInfo 
         instance("track", "struct.h", 82,
                  typeid(::track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &track_Dictionary, isa_proxy, 4,
                  sizeof(::track) );
      instance.SetNew(&new_track);
      instance.SetNewArray(&newArray_track);
      instance.SetDelete(&delete_track);
      instance.SetDeleteArray(&deleteArray_track);
      instance.SetDestructor(&destruct_track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::track*)
   {
      return GenerateInitInstanceLocal((::track*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::track*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *track_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::track*)nullptr)->GetClass();
      track_TClassManip(theClass);
   return theClass;
   }

   static void track_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *event_Dictionary();
   static void event_TClassManip(TClass*);
   static void *new_event(void *p = nullptr);
   static void *newArray_event(Long_t size, void *p);
   static void delete_event(void *p);
   static void deleteArray_event(void *p);
   static void destruct_event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::event*)
   {
      ::event *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::event));
      static ::ROOT::TGenericClassInfo 
         instance("event", "struct.h", 139,
                  typeid(::event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &event_Dictionary, isa_proxy, 4,
                  sizeof(::event) );
      instance.SetNew(&new_event);
      instance.SetNewArray(&newArray_event);
      instance.SetDelete(&delete_event);
      instance.SetDeleteArray(&deleteArray_event);
      instance.SetDestructor(&destruct_event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::event*)
   {
      return GenerateInitInstanceLocal((::event*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::event*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *event_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::event*)nullptr)->GetClass();
      event_TClassManip(theClass);
   return theClass;
   }

   static void event_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pe(void *p) {
      return  p ? new(p) ::pe : new ::pe;
   }
   static void *newArray_pe(Long_t nElements, void *p) {
      return p ? new(p) ::pe[nElements] : new ::pe[nElements];
   }
   // Wrapper around operator delete
   static void delete_pe(void *p) {
      delete ((::pe*)p);
   }
   static void deleteArray_pe(void *p) {
      delete [] ((::pe*)p);
   }
   static void destruct_pe(void *p) {
      typedef ::pe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pe

namespace ROOT {
   // Wrappers around operator new
   static void *new_dg_ps(void *p) {
      return  p ? new(p) ::dg_ps : new ::dg_ps;
   }
   static void *newArray_dg_ps(Long_t nElements, void *p) {
      return p ? new(p) ::dg_ps[nElements] : new ::dg_ps[nElements];
   }
   // Wrapper around operator delete
   static void delete_dg_ps(void *p) {
      delete ((::dg_ps*)p);
   }
   static void deleteArray_dg_ps(void *p) {
      delete [] ((::dg_ps*)p);
   }
   static void destruct_dg_ps(void *p) {
      typedef ::dg_ps current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::dg_ps

namespace ROOT {
   // Wrappers around operator new
   static void *new_dg_cell(void *p) {
      return  p ? new(p) ::dg_cell : new ::dg_cell;
   }
   static void *newArray_dg_cell(Long_t nElements, void *p) {
      return p ? new(p) ::dg_cell[nElements] : new ::dg_cell[nElements];
   }
   // Wrapper around operator delete
   static void delete_dg_cell(void *p) {
      delete ((::dg_cell*)p);
   }
   static void deleteArray_dg_cell(void *p) {
      delete [] ((::dg_cell*)p);
   }
   static void destruct_dg_cell(void *p) {
      typedef ::dg_cell current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::dg_cell

namespace ROOT {
   // Wrappers around operator new
   static void *new_dg_tube(void *p) {
      return  p ? new(p) ::dg_tube : new ::dg_tube;
   }
   static void *newArray_dg_tube(Long_t nElements, void *p) {
      return p ? new(p) ::dg_tube[nElements] : new ::dg_tube[nElements];
   }
   // Wrapper around operator delete
   static void delete_dg_tube(void *p) {
      delete ((::dg_tube*)p);
   }
   static void deleteArray_dg_tube(void *p) {
      delete [] ((::dg_tube*)p);
   }
   static void destruct_dg_tube(void *p) {
      typedef ::dg_tube current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::dg_tube

namespace ROOT {
   // Wrappers around operator new
   static void *new_cluster(void *p) {
      return  p ? new(p) ::cluster : new ::cluster;
   }
   static void *newArray_cluster(Long_t nElements, void *p) {
      return p ? new(p) ::cluster[nElements] : new ::cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_cluster(void *p) {
      delete ((::cluster*)p);
   }
   static void deleteArray_cluster(void *p) {
      delete [] ((::cluster*)p);
   }
   static void destruct_cluster(void *p) {
      typedef ::cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_track(void *p) {
      return  p ? new(p) ::track : new ::track;
   }
   static void *newArray_track(Long_t nElements, void *p) {
      return p ? new(p) ::track[nElements] : new ::track[nElements];
   }
   // Wrapper around operator delete
   static void delete_track(void *p) {
      delete ((::track*)p);
   }
   static void deleteArray_track(void *p) {
      delete [] ((::track*)p);
   }
   static void destruct_track(void *p) {
      typedef ::track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::track

namespace ROOT {
   // Wrappers around operator new
   static void *new_event(void *p) {
      return  p ? new(p) ::event : new ::event;
   }
   static void *newArray_event(Long_t nElements, void *p) {
      return p ? new(p) ::event[nElements] : new ::event[nElements];
   }
   // Wrapper around operator delete
   static void delete_event(void *p) {
      delete ((::event*)p);
   }
   static void deleteArray_event(void *p) {
      delete [] ((::event*)p);
   }
   static void destruct_event(void *p) {
      typedef ::event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::event

namespace ROOT {
   static TClass *vectorlEtrackgR_Dictionary();
   static void vectorlEtrackgR_TClassManip(TClass*);
   static void *new_vectorlEtrackgR(void *p = nullptr);
   static void *newArray_vectorlEtrackgR(Long_t size, void *p);
   static void delete_vectorlEtrackgR(void *p);
   static void deleteArray_vectorlEtrackgR(void *p);
   static void destruct_vectorlEtrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<track>*)
   {
      vector<track> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<track>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<track>", -2, "vector", 386,
                  typeid(vector<track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<track>) );
      instance.SetNew(&new_vectorlEtrackgR);
      instance.SetNewArray(&newArray_vectorlEtrackgR);
      instance.SetDelete(&delete_vectorlEtrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtrackgR);
      instance.SetDestructor(&destruct_vectorlEtrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<track> >()));

      ::ROOT::AddClassAlternate("vector<track>","std::vector<track, std::allocator<track> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<track>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<track>*)nullptr)->GetClass();
      vectorlEtrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<track> : new vector<track>;
   }
   static void *newArray_vectorlEtrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<track>[nElements] : new vector<track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtrackgR(void *p) {
      delete ((vector<track>*)p);
   }
   static void deleteArray_vectorlEtrackgR(void *p) {
      delete [] ((vector<track>*)p);
   }
   static void destruct_vectorlEtrackgR(void *p) {
      typedef vector<track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<track>

namespace ROOT {
   static TClass *vectorlEpegR_Dictionary();
   static void vectorlEpegR_TClassManip(TClass*);
   static void *new_vectorlEpegR(void *p = nullptr);
   static void *newArray_vectorlEpegR(Long_t size, void *p);
   static void delete_vectorlEpegR(void *p);
   static void deleteArray_vectorlEpegR(void *p);
   static void destruct_vectorlEpegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pe>*)
   {
      vector<pe> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pe>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pe>", -2, "vector", 386,
                  typeid(vector<pe>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pe>) );
      instance.SetNew(&new_vectorlEpegR);
      instance.SetNewArray(&newArray_vectorlEpegR);
      instance.SetDelete(&delete_vectorlEpegR);
      instance.SetDeleteArray(&deleteArray_vectorlEpegR);
      instance.SetDestructor(&destruct_vectorlEpegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pe> >()));

      ::ROOT::AddClassAlternate("vector<pe>","std::vector<pe, std::allocator<pe> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pe>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pe>*)nullptr)->GetClass();
      vectorlEpegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pe> : new vector<pe>;
   }
   static void *newArray_vectorlEpegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pe>[nElements] : new vector<pe>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpegR(void *p) {
      delete ((vector<pe>*)p);
   }
   static void deleteArray_vectorlEpegR(void *p) {
      delete [] ((vector<pe>*)p);
   }
   static void destruct_vectorlEpegR(void *p) {
      typedef vector<pe> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pe>

namespace ROOT {
   static TClass *vectorlEparticlegR_Dictionary();
   static void vectorlEparticlegR_TClassManip(TClass*);
   static void *new_vectorlEparticlegR(void *p = nullptr);
   static void *newArray_vectorlEparticlegR(Long_t size, void *p);
   static void delete_vectorlEparticlegR(void *p);
   static void deleteArray_vectorlEparticlegR(void *p);
   static void destruct_vectorlEparticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<particle>*)
   {
      vector<particle> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<particle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<particle>", -2, "vector", 386,
                  typeid(vector<particle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEparticlegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<particle>) );
      instance.SetNew(&new_vectorlEparticlegR);
      instance.SetNewArray(&newArray_vectorlEparticlegR);
      instance.SetDelete(&delete_vectorlEparticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEparticlegR);
      instance.SetDestructor(&destruct_vectorlEparticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<particle> >()));

      ::ROOT::AddClassAlternate("vector<particle>","std::vector<particle, std::allocator<particle> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<particle>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEparticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<particle>*)nullptr)->GetClass();
      vectorlEparticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEparticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEparticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<particle> : new vector<particle>;
   }
   static void *newArray_vectorlEparticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<particle>[nElements] : new vector<particle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEparticlegR(void *p) {
      delete ((vector<particle>*)p);
   }
   static void deleteArray_vectorlEparticlegR(void *p) {
      delete [] ((vector<particle>*)p);
   }
   static void destruct_vectorlEparticlegR(void *p) {
      typedef vector<particle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<particle>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 386,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)nullptr)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdg_tubegR_Dictionary();
   static void vectorlEdg_tubegR_TClassManip(TClass*);
   static void *new_vectorlEdg_tubegR(void *p = nullptr);
   static void *newArray_vectorlEdg_tubegR(Long_t size, void *p);
   static void delete_vectorlEdg_tubegR(void *p);
   static void deleteArray_vectorlEdg_tubegR(void *p);
   static void destruct_vectorlEdg_tubegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<dg_tube>*)
   {
      vector<dg_tube> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<dg_tube>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<dg_tube>", -2, "vector", 386,
                  typeid(vector<dg_tube>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdg_tubegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<dg_tube>) );
      instance.SetNew(&new_vectorlEdg_tubegR);
      instance.SetNewArray(&newArray_vectorlEdg_tubegR);
      instance.SetDelete(&delete_vectorlEdg_tubegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdg_tubegR);
      instance.SetDestructor(&destruct_vectorlEdg_tubegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<dg_tube> >()));

      ::ROOT::AddClassAlternate("vector<dg_tube>","std::vector<dg_tube, std::allocator<dg_tube> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<dg_tube>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdg_tubegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<dg_tube>*)nullptr)->GetClass();
      vectorlEdg_tubegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdg_tubegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdg_tubegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_tube> : new vector<dg_tube>;
   }
   static void *newArray_vectorlEdg_tubegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_tube>[nElements] : new vector<dg_tube>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdg_tubegR(void *p) {
      delete ((vector<dg_tube>*)p);
   }
   static void deleteArray_vectorlEdg_tubegR(void *p) {
      delete [] ((vector<dg_tube>*)p);
   }
   static void destruct_vectorlEdg_tubegR(void *p) {
      typedef vector<dg_tube> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<dg_tube>

namespace ROOT {
   static TClass *vectorlEdg_psgR_Dictionary();
   static void vectorlEdg_psgR_TClassManip(TClass*);
   static void *new_vectorlEdg_psgR(void *p = nullptr);
   static void *newArray_vectorlEdg_psgR(Long_t size, void *p);
   static void delete_vectorlEdg_psgR(void *p);
   static void deleteArray_vectorlEdg_psgR(void *p);
   static void destruct_vectorlEdg_psgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<dg_ps>*)
   {
      vector<dg_ps> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<dg_ps>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<dg_ps>", -2, "vector", 386,
                  typeid(vector<dg_ps>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdg_psgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<dg_ps>) );
      instance.SetNew(&new_vectorlEdg_psgR);
      instance.SetNewArray(&newArray_vectorlEdg_psgR);
      instance.SetDelete(&delete_vectorlEdg_psgR);
      instance.SetDeleteArray(&deleteArray_vectorlEdg_psgR);
      instance.SetDestructor(&destruct_vectorlEdg_psgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<dg_ps> >()));

      ::ROOT::AddClassAlternate("vector<dg_ps>","std::vector<dg_ps, std::allocator<dg_ps> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<dg_ps>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdg_psgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<dg_ps>*)nullptr)->GetClass();
      vectorlEdg_psgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdg_psgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdg_psgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_ps> : new vector<dg_ps>;
   }
   static void *newArray_vectorlEdg_psgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_ps>[nElements] : new vector<dg_ps>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdg_psgR(void *p) {
      delete ((vector<dg_ps>*)p);
   }
   static void deleteArray_vectorlEdg_psgR(void *p) {
      delete [] ((vector<dg_ps>*)p);
   }
   static void destruct_vectorlEdg_psgR(void *p) {
      typedef vector<dg_ps> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<dg_ps>

namespace ROOT {
   static TClass *vectorlEdg_cellgR_Dictionary();
   static void vectorlEdg_cellgR_TClassManip(TClass*);
   static void *new_vectorlEdg_cellgR(void *p = nullptr);
   static void *newArray_vectorlEdg_cellgR(Long_t size, void *p);
   static void delete_vectorlEdg_cellgR(void *p);
   static void deleteArray_vectorlEdg_cellgR(void *p);
   static void destruct_vectorlEdg_cellgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<dg_cell>*)
   {
      vector<dg_cell> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<dg_cell>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<dg_cell>", -2, "vector", 386,
                  typeid(vector<dg_cell>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdg_cellgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<dg_cell>) );
      instance.SetNew(&new_vectorlEdg_cellgR);
      instance.SetNewArray(&newArray_vectorlEdg_cellgR);
      instance.SetDelete(&delete_vectorlEdg_cellgR);
      instance.SetDeleteArray(&deleteArray_vectorlEdg_cellgR);
      instance.SetDestructor(&destruct_vectorlEdg_cellgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<dg_cell> >()));

      ::ROOT::AddClassAlternate("vector<dg_cell>","std::vector<dg_cell, std::allocator<dg_cell> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<dg_cell>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdg_cellgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<dg_cell>*)nullptr)->GetClass();
      vectorlEdg_cellgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdg_cellgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdg_cellgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_cell> : new vector<dg_cell>;
   }
   static void *newArray_vectorlEdg_cellgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<dg_cell>[nElements] : new vector<dg_cell>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdg_cellgR(void *p) {
      delete ((vector<dg_cell>*)p);
   }
   static void deleteArray_vectorlEdg_cellgR(void *p) {
      delete [] ((vector<dg_cell>*)p);
   }
   static void destruct_vectorlEdg_cellgR(void *p) {
      typedef vector<dg_cell> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<dg_cell>

namespace ROOT {
   static TClass *vectorlEclustergR_Dictionary();
   static void vectorlEclustergR_TClassManip(TClass*);
   static void *new_vectorlEclustergR(void *p = nullptr);
   static void *newArray_vectorlEclustergR(Long_t size, void *p);
   static void delete_vectorlEclustergR(void *p);
   static void deleteArray_vectorlEclustergR(void *p);
   static void destruct_vectorlEclustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<cluster>*)
   {
      vector<cluster> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<cluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<cluster>", -2, "vector", 386,
                  typeid(vector<cluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEclustergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<cluster>) );
      instance.SetNew(&new_vectorlEclustergR);
      instance.SetNewArray(&newArray_vectorlEclustergR);
      instance.SetDelete(&delete_vectorlEclustergR);
      instance.SetDeleteArray(&deleteArray_vectorlEclustergR);
      instance.SetDestructor(&destruct_vectorlEclustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<cluster> >()));

      ::ROOT::AddClassAlternate("vector<cluster>","std::vector<cluster, std::allocator<cluster> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<cluster>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEclustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<cluster>*)nullptr)->GetClass();
      vectorlEclustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEclustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEclustergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster> : new vector<cluster>;
   }
   static void *newArray_vectorlEclustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster>[nElements] : new vector<cluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEclustergR(void *p) {
      delete ((vector<cluster>*)p);
   }
   static void deleteArray_vectorlEclustergR(void *p) {
      delete [] ((vector<cluster>*)p);
   }
   static void destruct_vectorlEclustergR(void *p) {
      typedef vector<cluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<cluster>

namespace {
  void TriggerDictionaryInitialization_libStruct_Impl() {
    static const char* headers[] = {
"struct.h",
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
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include/",
"/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libStruct dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
struct __attribute__((annotate("$clingAutoload$struct.h")))  pe;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
struct __attribute__((annotate("$clingAutoload$struct.h")))  dg_ps;
struct __attribute__((annotate("$clingAutoload$struct.h")))  dg_cell;
struct __attribute__((annotate("$clingAutoload$struct.h")))  dg_tube;
struct __attribute__((annotate("$clingAutoload$struct.h")))  cluster;
struct __attribute__((annotate("$clingAutoload$struct.h")))  track;
struct __attribute__((annotate("$clingAutoload$struct.h")))  event;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libStruct dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "struct.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"cluster", payloadCode, "@",
"dg_cell", payloadCode, "@",
"dg_ps", payloadCode, "@",
"dg_tube", payloadCode, "@",
"event", payloadCode, "@",
"pe", payloadCode, "@",
"track", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libStruct",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libStruct_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libStruct_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libStruct() {
  TriggerDictionaryInitialization_libStruct_Impl();
}
