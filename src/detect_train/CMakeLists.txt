add_library ( sample sample.cpp )

add_executable ( fillpos fillpos.cpp )
target_link_libraries ( fillpos sample ${OpenCV_LIBS} )
