set(HEADER_FILES
	Entity.h
	BoomApp.h
)

set(SOURCE_FILES
	Entity.cpp
	BoomApp.cpp
	main.cpp
)

add_executable(Boom ${HEADER_FILES} ${SOURCE_FILES})

include_directories(../Flapjack)

target_link_libraries(Boom Flapjack)

file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Boom)
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Debug)
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Release)