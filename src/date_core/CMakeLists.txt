add_library(date_core STATIC
        src/date.cpp
)

target_link_libraries(date_core PRIVATE project_warnings)
if (TARGET project_sanitizers)
        target_link_libraries(date_core PRIVATE project_sanitizers)
endif ()

target_include_directories(date_core
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
