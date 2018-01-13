cmake_minimum_required ( VERSION 2.8 )

include_directories ( ${PROJECT_SOURCE_DIR}/lib )

add_subdirectory ( detect_train )

set ( APP_SRC objectDetection.cpp )
set ( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )

find_package ( OpenCV REQUIRED )

add_executable ( detect ${APP_SRC} )
target_link_libraries ( detect ${OpenCV_LIBS} )
