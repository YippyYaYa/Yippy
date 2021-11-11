#pragma once
// Wrap glfw functions as game main loop

// fprintf
#include <stdio.h>


namespace Yippy
{
  static void glfw_error_callback(int error, const char* description)
  {
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
  }

  class glfwWrapper
  {
  public:
    glfwWrapper(void* wndHandler);
    ~glfwWrapper();
    // Returns true when init successful
    //bool Init(void* wndHandler);
    void Update();
    void Exit();
  };
}