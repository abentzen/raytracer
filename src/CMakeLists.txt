set(HEADERS objects/Object.hpp Ray.hpp Vector.hpp)
set(SRC main.cpp Vector.cpp)

source_group("Header Files" FILES ${HEADERS})
add_executable(ray ${SRC} ${HEADERS})
