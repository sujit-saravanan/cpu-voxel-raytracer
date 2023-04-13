#include "ray_structs.h"

Image::Image(uint16_t image_plane_width, uint16_t image_plane_height) : m_width(image_plane_width), m_height(image_plane_height), m_tex(0){
        m_bytes.reserve(image_plane_height * image_plane_width);
        
        gl::CreateTextures(gl::TextureTarget::eTexture2d, 1, &m_tex);
        
        gl::TextureParameteri(m_tex, gl::TextureParameterName::eTextureMinFilter, GL_NEAREST);
        gl::TextureParameteri(m_tex, gl::TextureParameterName::eTextureMagFilter, GL_NEAREST);
        gl::TextureParameteri(m_tex, gl::TextureParameterName::eTextureWrapS, GL_REPEAT);
        gl::TextureParameteri(m_tex, gl::TextureParameterName::eTextureWrapT, GL_REPEAT);
        
        gl::TextureStorage2D(m_tex, 1, gl::SizedInternalFormat::eRgba8, image_plane_width, image_plane_height);
        gl::TextureSubImage2D(m_tex, 0, 0, 0, image_plane_width, image_plane_height, gl::PixelFormat::eRgba, gl::PixelType::eUnsignedByte, m_bytes.data());
        gl::GenerateTextureMipmap(m_tex);
}
void Image::bind() const noexcept {
        gl::BindTextureUnit(0, m_tex);
}



Camera::Camera(uint16_t image_plane_width, uint16_t image_plane_height, Vec3 origin, Vec3 direction) : m_origin(origin), m_direction(direction), m_image(image_plane_width, image_plane_height) {
}