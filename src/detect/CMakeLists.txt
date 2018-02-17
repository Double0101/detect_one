add_executable ( objdetect detect.cpp )
target_link_libraries ( objdetect ${OpenCV_LIBS} )

add_executable( imgdetect imgdetect.cpp )
target_link_libraries( imgdetect ${OpenCV_LIBS} )
