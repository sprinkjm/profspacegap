#ifndef PROFSPACEGAP__VISIBILITY_CONTROL_H_
#define PROFSPACEGAP__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define PROFSPACEGAP_EXPORT __attribute__ ((dllexport))
    #define PROFSPACEGAP_IMPORT __attribute__ ((dllimport))
  #else
    #define PROFSPACEGAP_EXPORT __declspec(dllexport)
    #define PROFSPACEGAP_IMPORT __declspec(dllimport)
  #endif
  #ifdef PROFSPACEGAP_BUILDING_LIBRARY
    #define PROFSPACEGAP_PUBLIC PROFSPACEGAP_EXPORT
  #else
    #define PROFSPACEGAP_PUBLIC PROFSPACEGAP_IMPORT
  #endif
  #define PROFSPACEGAP_PUBLIC_TYPE PROFSPACEGAP_PUBLIC
  #define PROFSPACEGAP_LOCAL
#else
  #define PROFSPACEGAP_EXPORT __attribute__ ((visibility("default")))
  #define PROFSPACEGAP_IMPORT
  #if __GNUC__ >= 4
    #define PROFSPACEGAP_PUBLIC __attribute__ ((visibility("default")))
    #define PROFSPACEGAP_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define PROFSPACEGAP_PUBLIC
    #define PROFSPACEGAP_LOCAL
  #endif
  #define PROFSPACEGAP_PUBLIC_TYPE
#endif
#endif  // PROFSPACEGAP__VISIBILITY_CONTROL_H_
// Generated 17-Oct-2024 10:51:51
// Copyright 2019-2020 The MathWorks, Inc.
