#pragma once

#define ACCURACY
//#define PREDICTIONTIME

#define INT16
//#define INT32


#ifdef INT16
typedef int16_t MYINT;
#endif

#ifdef INT32
typedef int32_t MYINT;
#endif

typedef uint16_t MYUINT;
