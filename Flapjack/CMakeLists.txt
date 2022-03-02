add_library(Flapjack SHARED Flapjack.h FlapjackApp.h FlapjackUtil.h FlapjackApp.cpp)


add_definitions(-DFLAPJACK_LIB)
add_definitions(-DFLAPJACK_DEBUG)