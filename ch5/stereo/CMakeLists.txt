find_package(Pangolin REQUIRED)
find_package(Eigen3 3.1.0 REQUIRED)
find_package( OpenCV REQUIRED )

include_directories(
        ${EIGEN3_INCLUDE_DIR}
        ${Pangolin_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS}
)
add_executable(stereoVision stereoVision.cpp)
target_link_libraries(stereoVision ${OpenCV_LIBS} ${Pangolin_LIBRARIES})