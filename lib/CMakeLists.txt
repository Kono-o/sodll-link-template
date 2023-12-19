add_library( rary SHARED lib.h lib.cpp)
add_compile_definitions(LIBRARY_EXPORTS)
target_include_directories(rary PUBLIC "${PROJECT_SOURCE_DIR}")