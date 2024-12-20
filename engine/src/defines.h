#pragma once

//-----------------------------------------------
// Primitive Typedefs
//-----------------------------------------------

// Unsigned integer types
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

// Signed integer types
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long long i64;

// Floating point types
typedef float f32;
typedef double f64;

// Boolean types
typedef unsigned char b8;

#define true 1
#define false 0

// Type assertions
// These exist to ensure that our primitive typedefs will be the correct size at
// compile time. If this causes the compile to fail, then the types will need to
// be redefined for the platform.
_Static_assert(sizeof(u8) == 1, "Expected u8 to be 1 byte.");
_Static_assert(sizeof(u16) == 2, "Expected u16 to be 2 bytes.");
_Static_assert(sizeof(u32) == 4, "Expected u8 to be 4 bytes.");
_Static_assert(sizeof(u64) == 8, "Expected u8 to be 8 bytes.");

_Static_assert(sizeof(i8) == 1, "Expected i8 to be 1 byte.");
_Static_assert(sizeof(i16) == 2, "Expected i16 to be 2 bytes.");
_Static_assert(sizeof(i32) == 4, "Expected int to be 4 bytes.");
_Static_assert(sizeof(i64) == 8, "Expected i64 to be 8 bytes.");

_Static_assert(sizeof(f32) == 4, "Expected f32 to be 4 bytes.");
_Static_assert(sizeof(f64) == 8, "Expected f32 to be 8 bytes.");

// Function imports/exports

#ifdef DLL_EXPORT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif
