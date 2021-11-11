#pragma once
// Main functions called in main.cpp

// Window
#include "glfw/glfwWrapper.h"
// EditorGUI
#include "imgui/imguiWrapper.h"

namespace Yippy
{
  class YippyEngine
  {
    void* wndHandler;

    glfwWrapper   Window;
    imguiWrapper  EditorGUI;
    // All systems
  public:
    YippyEngine();
    ~YippyEngine();

    void Init();
  };
}