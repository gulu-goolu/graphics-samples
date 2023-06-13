#pragma once

#include "absl/status/status.h"

namespace graphics_samples {
namespace framework {
struct IApplication {

  virtual ~IApplication() = default;

  // 启动回调
  virtual absl::Status startup() = 0;

  // 更新程序状态
  virtual absl::Status update() = 0;

  // 清理资源
  virtual absl::Status cleanup() = 0;
};

// 执行程序
int app_run(const char* title, IApplication* app);

}  // namespace framework
}  // namespace graphics_samples
