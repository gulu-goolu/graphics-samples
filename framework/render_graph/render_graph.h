#pragma once

#include "vulkan/vulkan.h"

namespace graphics_samples {
namespace framework {
class RenderPass {
 public:
  virtual ~RenderPass() = default;
};

class RenderGraph {
 public:
  // 添加一个新的 RenderPass
	 RenderPass* add_render_pass();
};
}  // namespace framework
}  // namespace graphics_samples
