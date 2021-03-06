
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_IORInfoOperations__
#define __org_omg_PortableInterceptor_IORInfoOperations__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Policy;
      }
      namespace IOP
      {
          class TaggedComponent;
      }
      namespace PortableInterceptor
      {
          class IORInfoOperations;
          class ObjectReferenceFactory;
          class ObjectReferenceTemplate;
      }
    }
  }
}

class org::omg::PortableInterceptor::IORInfoOperations : public ::java::lang::Object
{

public:
  virtual void add_ior_component_to_profile(::org::omg::IOP::TaggedComponent *, jint) = 0;
  virtual void add_ior_component(::org::omg::IOP::TaggedComponent *) = 0;
  virtual ::org::omg::CORBA::Policy * get_effective_policy(jint) = 0;
  virtual ::org::omg::PortableInterceptor::ObjectReferenceTemplate * adapter_template() = 0;
  virtual ::org::omg::PortableInterceptor::ObjectReferenceFactory * current_factory() = 0;
  virtual void current_factory(::org::omg::PortableInterceptor::ObjectReferenceFactory *) = 0;
  virtual jint manager_id() = 0;
  virtual jshort state() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableInterceptor_IORInfoOperations__
