
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_LongSeqHolder__
#define __org_omg_CORBA_LongSeqHolder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace typecodes
      {
          class ArrayTypeCode;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class LongSeqHolder;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::LongSeqHolder : public ::java::lang::Object
{

public:
  LongSeqHolder();
  LongSeqHolder(JArray< jint > *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::org::omg::CORBA::TypeCode * _type();
private:
  ::gnu::CORBA::typecodes::ArrayTypeCode * __attribute__((aligned(__alignof__( ::java::lang::Object)))) typecode;
public:
  JArray< jint > * value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_LongSeqHolder__
