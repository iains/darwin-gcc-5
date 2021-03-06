
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_DefaultTreeCellEditor__
#define __javax_swing_tree_DefaultTreeCellEditor__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
        class Container;
        class Font;
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Icon;
        class JTree;
        class Timer;
      namespace event
      {
          class CellEditorListener;
          class EventListenerList;
          class TreeSelectionEvent;
      }
      namespace tree
      {
          class DefaultTreeCellEditor;
          class DefaultTreeCellRenderer;
          class TreeCellEditor;
          class TreePath;
      }
    }
  }
}

class javax::swing::tree::DefaultTreeCellEditor : public ::java::lang::Object
{

public:
  DefaultTreeCellEditor(::javax::swing::JTree *, ::javax::swing::tree::DefaultTreeCellRenderer *);
  DefaultTreeCellEditor(::javax::swing::JTree *, ::javax::swing::tree::DefaultTreeCellRenderer *, ::javax::swing::tree::TreeCellEditor *);
private:
  void writeObject(::java::io::ObjectOutputStream *);
  void readObject(::java::io::ObjectInputStream *);
public:
  virtual void setBorderSelectionColor(::java::awt::Color *);
  virtual ::java::awt::Color * getBorderSelectionColor();
  virtual void setFont(::java::awt::Font *);
  virtual ::java::awt::Font * getFont();
  virtual ::java::awt::Component * getTreeCellEditorComponent(::javax::swing::JTree *, ::java::lang::Object *, jboolean, jboolean, jboolean, jint);
  virtual ::java::lang::Object * getCellEditorValue();
  virtual jboolean isCellEditable(::java::util::EventObject *);
  virtual jboolean shouldSelectCell(::java::util::EventObject *);
  virtual jboolean stopCellEditing();
  virtual void cancelCellEditing();
private:
  void finish();
public:
  virtual void addCellEditorListener(::javax::swing::event::CellEditorListener *);
  virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener *);
  virtual JArray< ::javax::swing::event::CellEditorListener * > * getCellEditorListeners();
  virtual void valueChanged(::javax::swing::event::TreeSelectionEvent *);
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually protected
  virtual void setTree(::javax::swing::JTree *);
  virtual jboolean shouldStartEditingTimer(::java::util::EventObject *);
  virtual void startEditingTimer();
  virtual jboolean canEditImmediately(::java::util::EventObject *);
  virtual jboolean inHitRegion(jint, jint);
  virtual void determineOffset(::javax::swing::JTree *, ::java::lang::Object *, jboolean, jboolean, jboolean, jint);
  virtual void prepareForEditing();
  virtual ::java::awt::Container * createContainer();
  virtual ::javax::swing::tree::TreeCellEditor * createTreeCellEditor();
private:
  ::javax::swing::event::EventListenerList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) listenerList;
public: // actually protected
  ::javax::swing::tree::TreeCellEditor * realEditor;
  ::javax::swing::tree::DefaultTreeCellRenderer * renderer;
  ::java::awt::Container * editingContainer;
  ::java::awt::Component * editingComponent;
  jboolean canEdit;
  jint offset;
  ::javax::swing::JTree * tree;
  ::javax::swing::tree::TreePath * lastPath;
  ::javax::swing::Timer * timer;
  jint lastRow;
  ::java::awt::Color * borderSelectionColor;
  ::javax::swing::Icon * editingIcon;
  ::java::awt::Font * font;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_tree_DefaultTreeCellEditor__
