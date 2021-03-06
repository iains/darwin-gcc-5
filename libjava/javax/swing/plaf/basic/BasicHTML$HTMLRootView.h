
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicHTML$HTMLRootView__
#define __javax_swing_plaf_basic_BasicHTML$HTMLRootView__

#pragma interface

#include <javax/swing/text/View.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Container;
        class Graphics;
        class Shape;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JComponent;
      namespace event
      {
          class DocumentEvent;
      }
      namespace plaf
      {
        namespace basic
        {
            class BasicHTML$HTMLRootView;
        }
      }
      namespace text
      {
          class AttributeSet;
          class Document;
          class EditorKit;
          class Element;
          class Position$Bias;
          class View;
          class ViewFactory;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicHTML$HTMLRootView : public ::javax::swing::text::View
{

public:
  BasicHTML$HTMLRootView(::javax::swing::JComponent *, ::javax::swing::text::View *, ::javax::swing::text::EditorKit *, ::javax::swing::text::Document *);
  virtual ::javax::swing::text::ViewFactory * getViewFactory();
  virtual void preferenceChanged(::javax::swing::text::View *, jboolean, jboolean);
  virtual void setView(::javax::swing::text::View *);
  virtual void setSize(jfloat, jfloat);
  virtual ::javax::swing::text::View * getView(jint);
  virtual jint getViewCount();
  virtual ::java::awt::Container * getContainer();
  virtual jfloat getPreferredSpan(jint);
  virtual void paint(::java::awt::Graphics *, ::java::awt::Shape *);
  virtual ::java::awt::Shape * modelToView(jint, ::java::awt::Shape *, ::javax::swing::text::Position$Bias *);
  virtual jint viewToModel(jfloat, jfloat, ::java::awt::Shape *, JArray< ::javax::swing::text::Position$Bias * > *);
  virtual void insertUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void removeUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void changedUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual jint getNextVisualPositionFrom(jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *, jint, JArray< ::javax::swing::text::Position$Bias * > *);
  virtual jint getStartOffset();
  virtual jint getEndOffset();
  virtual ::javax::swing::text::Document * getDocument();
  virtual ::javax::swing::text::AttributeSet * getAttributes();
  virtual ::javax::swing::text::Element * getElement();
private:
  ::javax::swing::text::View * __attribute__((aligned(__alignof__( ::javax::swing::text::View)))) view;
  ::javax::swing::JComponent * component;
  ::javax::swing::text::EditorKit * editorKit;
  ::javax::swing::text::Document * document;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicHTML$HTMLRootView__
