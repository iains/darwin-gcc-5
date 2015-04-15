
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_FilteredEventReader__
#define __gnu_xml_stream_FilteredEventReader__

#pragma interface

#include <javax/xml/stream/util/EventReaderDelegate.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class FilteredEventReader;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace stream
      {
          class EventFilter;
          class XMLEventReader;
        namespace events
        {
            class XMLEvent;
        }
      }
    }
  }
}

class gnu::xml::stream::FilteredEventReader : public ::javax::xml::stream::util::EventReaderDelegate
{

public: // actually package-private
  FilteredEventReader(::javax::xml::stream::XMLEventReader *, ::javax::xml::stream::EventFilter *);
public:
  virtual jboolean hasNext();
  virtual ::javax::xml::stream::events::XMLEvent * nextEvent();
  virtual ::java::lang::Object * next();
  virtual ::javax::xml::stream::events::XMLEvent * peek();
  virtual ::javax::xml::stream::events::XMLEvent * nextTag();
public: // actually package-private
  ::javax::xml::stream::EventFilter * __attribute__((aligned(__alignof__( ::javax::xml::stream::util::EventReaderDelegate)))) filter;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_FilteredEventReader__
