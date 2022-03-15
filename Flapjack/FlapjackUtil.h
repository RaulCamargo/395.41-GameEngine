#pragma once

#include "pch.h"

#ifdef FLAPJACK_WINDOWS
	#ifdef FLAPJACK_LIB
		#define FLAPJACK_API __declspec(dllexport)
	#else
		#define FLAPJACK_API __declspec(dllimport)
	#endif // End ifdef FLAPJACK_LIB
#else
	#define	FLAPJACK_API
#endif // End ifdef FLAPJACK_WINDOWS

#ifdef FLAPJACK_DEBUG
	#define FLAPJACK_LOG(x) std::cout << x <<std::endl;
#else
	#define FLAPJACK_LOG(x)
#endif  //End ifdef FLAPJACK_DEBUG
