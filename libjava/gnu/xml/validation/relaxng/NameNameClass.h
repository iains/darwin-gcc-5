
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_relaxng_NameNameClass__
#define __gnu_xml_validation_relaxng_NameNameClass__

#pragma interface

#include <gnu/xml/validation/relaxng/NameClass.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace relaxng
        {
            class NameNameClass;
        }
      }
    }
  }
}

class gnu::xml::validation::relaxng::NameNameClass : public ::gnu::xml::validation::relaxng::NameClass
{

public: // actually package-private
  NameNameClass();
  virtual jboolean matchesName(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * __attribute__((aligned(__alignof__( ::gnu::xml::validation::relaxng::NameClass)))) ns;
  ::java::lang::String * name;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_relaxng_NameNameClass__
