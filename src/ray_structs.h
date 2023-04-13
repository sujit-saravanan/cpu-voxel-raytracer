#pragma once
#include <GLFW/glfw3.h>
#include <vector>
#include "config.h"
#include "ray_math.h"


class Image {
public:
        Image(uint16_t image_plane_width, uint16_t image_plane_height);
        ~Image() = default;
        
public:
        [[nodiscard]] inline Color*              buffer() const noexcept {return const_cast<Color*>(m_bytes.data());}
        [[nodiscard]] inline std::vector<Color>& bytes()  const noexcept {return const_cast<std::vector<Color>&>(m_bytes);}
        [[nodiscard]] inline GLuint              tex()    const noexcept {return m_tex;}
        [[nodiscard]] inline uint16_t            height() const noexcept {return m_height;}
        [[nodiscard]] inline uint16_t            width()  const noexcept {return m_width;}
        
public:
        inline void bind() const noexcept;

private:
        std::vector<Color> m_bytes;
        GLuint             m_tex;
        uint16_t           m_height;
        uint16_t           m_width;
};


class Camera {
public:
        Camera(uint16_t image_plane_width, uint16_t image_plane_height, Vec3 origin, Vec3 direction);
        ~Camera() = default;
        
public:
        [[nodiscard]] Image& image()     const noexcept {return const_cast<Image &>(m_image);}
        [[nodiscard]] Vec3&  origin()    const noexcept {return const_cast<Vec3 &>(m_origin);}
        [[nodiscard]] Vec3&  direction() const noexcept {return const_cast<Vec3 &>(m_direction);}
        
private:
        Image m_image;
        Vec3  m_origin;
        Vec3  m_direction;
};