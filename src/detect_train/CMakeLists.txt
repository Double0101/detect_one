add_executable ( fillpos fillpos.cpp )
target_link_libraries ( fillpos sample ${OpenCV_LIBS} )

add_executable( equalizehist equalizehist.cpp )
target_link_libraries( equalizehist ${OpenCV_LIBS} )
