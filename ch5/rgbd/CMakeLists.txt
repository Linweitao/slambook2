find_package(Pangolin REQUIRED)
include_directories("/home/tony/workspace/slambook2/3rdparty/Sophus")
include_directories("/usr/include/eigen3")

# 寻找OpenCV库
find_package( OpenCV REQUIRED )
# 添加头文件
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(joinMap joinMap.cpp)
target_link_libraries(joinMap ${OpenCV_LIBS} ${Pangolin_LIBRARIES})