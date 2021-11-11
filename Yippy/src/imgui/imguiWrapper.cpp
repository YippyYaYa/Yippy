#include "imguiWrapper.h"

// Imgui
#include "imgui.h"
#include "backends/imgui_impl_glfw.h"     //ImGui_ImplGlfw_InitForOpenGL()
#include "backends/imgui_impl_opengl3.h"  // ImGui_ImplOpenGL3_Init()

namespace Yippy
{
  imguiWrapper::imguiWrapper(void* wndHandler)
  {
    // Decide GL+GLSL versions
#if defined(IMGUI_IMPL_OPENGL_ES2)
    // GL ES 2.0 + GLSL 100
    const char* glsl_version = "#version 100";
#elif defined(__APPLE__)
    // GL 3.2 + GLSL 150
    const char* glsl_version = "#version 150";
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = "#version 130";
#endif

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();

    // Setup Platform/Renderer backends
    ImGui_ImplGlfw_InitForOpenGL((GLFWwindow*)wndHandler, true);
    ImGui_ImplOpenGL3_Init(glsl_version);
  }
}