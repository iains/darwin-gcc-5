
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLEditorKit$LinkController__
#define __javax_swing_text_html_HTMLEditorKit$LinkController__

#pragma interface

#include <java/awt/event/MouseAdapter.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JEditorPane;
      namespace event
      {
          class HyperlinkEvent;
      }
      namespace text
      {
          class AttributeSet;
          class Element;
        namespace html
        {
            class HTMLDocument;
            class HTMLEditorKit$LinkController;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLEditorKit$LinkController : public ::java::awt::event::MouseAdapter
{

public:
  HTMLEditorKit$LinkController();
  virtual void mouseClicked(::java::awt::event::MouseEvent *);
  virtual void mouseDragged(::java::awt::event::MouseEvent *);
  virtual void mouseMoved(::java::awt::event::MouseEvent *);
public: // actually protected
  virtual void activateLink(jint, ::javax::swing::JEditorPane *);
private:
  void activateLink(jint, ::javax::swing::JEditorPane *, jint, jint);
  ::javax::swing::event::HyperlinkEvent * createHyperlinkEvent(::javax::swing::JEditorPane *, ::javax::swing::text::html::HTMLDocument *, ::java::lang::String *, ::javax::swing::text::AttributeSet *, ::javax::swing::text::Element *);
  ::javax::swing::text::Element * __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter)))) lastAnchorElement;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLEditorKit$LinkController__
