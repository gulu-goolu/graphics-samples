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
  // ���һ���µ� RenderPass
	 RenderPass* add_render_pass();
};
}  // namespace framework
}  // namespace graphics_samples
