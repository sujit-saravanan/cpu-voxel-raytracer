#pragma once
#include "threadpool.h"
#include "ray_math.h"
#include "ray_structs.h"

class Raytracer{
public:
        Raytracer(uint16_t image_plane_width, uint16_t image_plane_height);
        ~Raytracer() = default;
        
public:
        [[nodiscard]] uint32_t          thread_count()       const noexcept {return m_thread_count;}
        [[nodiscard]] Camera&           camera()             const noexcept {return const_cast<Camera&>(m_camera);}
        [[nodiscard]] BS::thread_pool&  render_thread_pool() const noexcept {return const_cast<BS::thread_pool&>(m_render_thread_pool);}
        
public:
        static void renderTile(Color* image_buffer, int tile_x, int tile_y, int tile_width, int tile_height) noexcept;
        
private:
        uint32_t m_thread_count;
        Camera m_camera;
        BS::thread_pool m_render_thread_pool;
};