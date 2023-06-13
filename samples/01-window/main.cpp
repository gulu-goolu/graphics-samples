#include <Windows.h>
#include <winbase.h>

#include "framework/application/application.h"

class MyApp : public graphics_samples::framework::IApplication {
  absl::Status startup() override { return absl::OkStatus(); }
  absl::Status update() override { return absl::OkStatus(); }
  absl::Status cleanup() override { return absl::OkStatus(); }
};

int main(int argc, char* argv[]) {
  MyApp app;
  graphics_samples::framework::app_run("01-window", &app);
  return 0;
}
