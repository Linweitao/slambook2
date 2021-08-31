#include <gflags/gflags.h>
#include "myslam/visual_odometry.h"

/*
 * DEFINE_string(confPath, "../conf/setup.ini", "program configure file.");
 * 第一个字段 confPath就是命令行里要输入的参数名，比如 –confPath=./love.ini
 * 第二个字段”../conf/setup.ini”，就是如果命令行里没指定这个参数，那默认值就是 ../conf/setup.ini
 * 第三个字段”program configure file.”，就是这个参数的帮助说明信息，当用户输入 –hlep 的时候，会显示出来。
 */
DEFINE_string(config_file, "../config/default.yaml", "config file path");

int main(int argc, char **argv) {
    google::ParseCommandLineFlags(&argc, &argv, true);

    myslam::VisualOdometry::Ptr vo(
        new myslam::VisualOdometry(FLAGS_config_file));
    assert(vo->Init() == true);
    vo->Run();

    return 0;
}
