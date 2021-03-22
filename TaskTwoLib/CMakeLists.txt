project(TaskTwo)

set(HEADER_FILES
        TaskTwoResult.h
        )

set(SOURCE_FILES
        TaskTwo.cpp
        )

add_library(TaskTwoLib STATIC ${SOURCE_FILES} ${HEADER_FILES})