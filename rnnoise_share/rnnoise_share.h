#ifdef RNNOISESHARE_EXPORTS
#define RNNOISESHARE_API __declspec(dllexport)
#else
#define RNNOISESHARE_API __declspec(dllimport)
#endif

#include "framework.h"
#include "../include/rnnoise.h"
