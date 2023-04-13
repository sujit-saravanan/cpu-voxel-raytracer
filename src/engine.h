#pragma once
#include <GLFW/glfw3.h>

class EngineContext {
public:
        EngineContext();
        ~EngineContext();
public:
        [[nodiscard]] GLFWwindow* window() const noexcept {return m_window;}
        
public:
        [[nodiscard]] bool        windowShouldClose() const noexcept;
                      void        swapWindowBuffers() const noexcept;
                      static void clearWindowBuffer() noexcept;
                      static void pollEvents()        noexcept;
        
        
private:
        GLFWwindow* m_window;
};
