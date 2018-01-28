cmake_minimum_required ( VERSION 2.8 )

project ( detect_one )

set ( CMAKE_CXX_STANDARD 11 )
set ( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )

include_directories ( ${PROJECT_SOURCE_DIR}/include )

add_subdirectory ( lib )
add_subdirectory ( src )
