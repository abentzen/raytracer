# Header file lists
set(OBJ_HEADERS objects/Object.hpp)
set(MISC_HEADERS Ray.hpp Vector.hpp)
set(HEADERS ${OBJ_HEADERS} ${MISC_HEADERS})

# Source file lists
set(MISC_SRC Vector.cpp Ray.cpp)
set(OBJ_SRC)
set(SRC main.cpp ${MISC_SRC}) # main.cpp is outside the hierarchy

# Logical subdivision of headers and source files
source_group(Header\ Files\\Objects FILES ${OBJ_HEADERS})
source_group(Source\ Files\\Objects FILES ${OBJ_SRC})

add_executable(ray ${SRC} ${HEADERS})
