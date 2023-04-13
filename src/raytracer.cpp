#include "raytracer.h"

uint32_t lessThanEqual(Vec3 a, Vec3 b){

}

void Raytracer::renderTile(Color* image_buffer, int tile_x, int tile_y, int tile_width, int tile_height) noexcept {
        for (int y = 0; y < tile_height; y++){
                for (int x = 0; x < tile_width; x++){
                        auto start = std::chrono::high_resolution_clock::now();
                        auto now = std::chrono::high_resolution_clock::now();
                        while (std::chrono::duration<double, std::nano>(now - start).count() < 0.000)
                                now = std::chrono::high_resolution_clock::now();
                        image_buffer[ 480*(tile_height*tile_y + y) + (tile_width*tile_x + x) ] = Color{static_cast<uint32_t>(tile_x*100 + tile_y*100)};
                }
        }
}


Raytracer::Raytracer(uint16_t image_plane_width, uint16_t image_plane_height) : m_camera(image_plane_width, image_plane_height, {0, 0, 0}, {0, 0, 1}) {
        m_thread_count = (int)m_render_thread_pool.get_thread_count();
        
        double total = 0;
        int iterations = 100;
        const uint8_t tile_horiz = 6;
        const uint8_t tile_vert = 6;
        
        for (int i = 0; i < iterations; i++){
                auto start = std::chrono::high_resolution_clock::now();
                for (int y = 0; y < tile_vert; y++)
                        for (int x = 0; x < tile_horiz; x++)
                                m_render_thread_pool.push_task(renderTile, m_camera.image().buffer(), x, y, m_camera.image().width() / tile_horiz, m_camera.image().height() / tile_vert);
                m_render_thread_pool.wait_for_tasks();
                auto end = std::chrono::high_resolution_clock::now();
                total += std::chrono::duration<double, std::milli>(end - start).count();
        }
        std::cout << total / (double)iterations << "\n";
        
        gl::TextureSubImage2D(camera().image().tex(), 0, 0, 0, camera().image().width(), camera().image().height(), gl::PixelFormat::eRgba, gl::PixelType::eUnsignedByte, camera().image().bytes().data());
}