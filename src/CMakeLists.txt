find_package ( OpenCV REQUIRED )

set ( APP_SRC objectDetection.cpp )

add_subdirectory ( detect )
add_subdirectory ( detect_train )

add_executable ( detect ${APP_SRC} )
target_link_libraries ( detect ${OpenCV_LIBS} )
