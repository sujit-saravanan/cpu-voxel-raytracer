#include "engine.h"
#include "config.h"
#include "logger.h"

EngineContext::EngineContext() {
        glfwInit();
        
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, OPENGL_MAJOR_VERSION);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, OPENGL_MINOR_VERSION);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        
        m_window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "OpenGL Context", nullptr, nullptr);
        SILENT_ASSERT(m_window, ERROR("FAILED TO CREATE THE GLFW WINDOW"); glfwTerminate();)

        glfwMakeContextCurrent(m_window);
        glfwSwapInterval(VSYNC);
        
        SILENT_INLINE_ASSERT(gladLoadGLLoader((GLADloadproc)glfwGetProcAddress), ERROR("FAILED TO INITIALIZE OPENGL CONTEXT"))

        gl::Viewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
}
EngineContext::~EngineContext() {
        glfwDestroyWindow(m_window);
        glfwTerminate();
}


bool EngineContext::windowShouldClose() const noexcept {
        return glfwWindowShouldClose(m_window);
}
void EngineContext::swapWindowBuffers() const noexcept {
        glfwSwapBuffers(m_window);
}
void EngineContext::pollEvents() noexcept {
        glfwPollEvents();
}
void EngineContext::clearWindowBuffer() noexcept {
        gl::Clear(gl::ClearBufferMask::eColorBufferBit);
}
