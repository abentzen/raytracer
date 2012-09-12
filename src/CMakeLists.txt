set(HEADERS objects/Object.hpp)
set(SRC main.cpp)

source_group("Header Files" FILES ${HEADERS})
add_executable(ray ${SRC} ${HEADERS})
