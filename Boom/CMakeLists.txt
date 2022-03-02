add_executable(Boom main.cpp)

include_directories(../Flapjack)

target_link_libraries(Boom Flapjack)