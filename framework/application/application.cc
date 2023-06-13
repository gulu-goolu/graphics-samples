#include "application.h"

#include "GLFW/glfw3.h"

namespace graphics_samples {
namespace framework {
int app_run(const char* title, IApplication* app) {
  if (!glfwInit()) return -1;

  auto window = glfwCreateWindow(640, 480, title, nullptr, nullptr);

  // initialize the application
  auto startup_st = app->startup();
  if (!startup_st.ok()) {
    return -1;
  }

  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();

    auto st = app->update();
    if (!st.ok()) {
      break;
    }
  }

  auto cleanup_st = app->cleanup();
  if (!cleanup_st.ok()) {
    return -1;
  }

  return 0;
}
}  // namespace framework
}  // namespace graphics_samples
