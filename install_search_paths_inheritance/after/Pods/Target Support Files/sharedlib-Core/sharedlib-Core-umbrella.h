#ifdef __OBJC__
#import <Foundation/Foundation.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AmazingModel.h"

FOUNDATION_EXPORT double sharedlibVersionNumber;
FOUNDATION_EXPORT const unsigned char sharedlibVersionString[];

