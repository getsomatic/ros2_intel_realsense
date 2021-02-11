// Copyright (c) 2019 Intel Corporation. All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "realsense/rs_factory.hpp"
#include "bcr_core/tools/logging.hh"

int main(int argc, char ** argv)
{
  bcr::core::tools::logging::Logger(argv[0]).ExecutableLogLevel();
  rclcpp::init(argc, argv);
  auto realsense_node = std::make_shared<realsense::RealSenseNodeFactory>();
  rclcpp::spin(realsense_node);
  rclcpp::shutdown();
  return 0;
}
