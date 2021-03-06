
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_AudioFileFormat__
#define __javax_sound_sampled_AudioFileFormat__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFileFormat;
          class AudioFileFormat$Type;
          class AudioFormat;
      }
    }
  }
}

class javax::sound::sampled::AudioFileFormat : public ::java::lang::Object
{

public:
  AudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type *, ::javax::sound::sampled::AudioFormat *, jint);
  AudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type *, ::javax::sound::sampled::AudioFormat *, jint, ::java::util::Map *);
public: // actually protected
  AudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type *, jint, ::javax::sound::sampled::AudioFormat *, jint);
public:
  virtual jint getByteLength();
  virtual ::javax::sound::sampled::AudioFormat * getFormat();
  virtual jint getFrameLength();
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual ::javax::sound::sampled::AudioFileFormat$Type * getType();
  virtual ::java::util::Map * properties();
  virtual ::java::lang::String * toString();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) byteLength;
  ::javax::sound::sampled::AudioFormat * format;
  ::javax::sound::sampled::AudioFileFormat$Type * type;
  jint frameLength;
  ::java::util::Map * properties__;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_sound_sampled_AudioFileFormat__
