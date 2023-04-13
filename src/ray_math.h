#pragma once
#include <cstdint>

class Color {
public:
        Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : m_r(red), m_g(green), m_b(blue), m_a(alpha) {};
        explicit Color(uint32_t hex) : m_hex(hex) {};
        
        ~Color() = default;
public:
        [[nodiscard]] uint8_t r() const noexcept {return m_r;}
        [[nodiscard]] uint8_t g() const noexcept {return m_g;}
        [[nodiscard]] uint8_t b() const noexcept {return m_b;}
        [[nodiscard]] uint8_t a() const noexcept {return m_a;}
private:
        union {
                uint32_t m_hex{0xFFFFFFFF};
                struct {
                        uint8_t m_r;
                        uint8_t m_g;
                        uint8_t m_b;
                        uint8_t m_a;
                };
        };
};

class Vec3 {
public:
        Vec3(float x, float y, float z) : m_x(x), m_y(y), m_z(z) {};
        ~Vec3() = default;
public:
        Vec3 operator*(Vec3 v) const { return {m_x * v.m_x, m_y * v.m_y, m_z * v.m_z}; }
        Vec3 operator+(Vec3 v) const { return {m_x + v.m_x, m_y + v.m_y, m_z + v.m_z}; }
        Vec3 operator-(Vec3 v) const { return {m_x - v.m_x, m_y - v.m_y, m_z - v.m_z}; }
        Vec3 operator/(Vec3 v) const { return {m_x / v.m_x, m_y / v.m_y, m_z / v.m_z}; }
        
        Vec3 operator*(float v) const { return {m_x * v, m_y * v, m_z * v}; }
        Vec3 operator+(float v) const { return {m_x + v, m_y + v, m_z + v}; }
        Vec3 operator-(float v) const { return {m_x - v, m_y - v, m_z - v}; }
        Vec3 operator/(float v) const { return {m_x / v, m_y / v, m_z / v}; }
public:
        [[nodiscard]] inline float x() const noexcept {return m_x;}
        [[nodiscard]] inline float y() const noexcept {return m_y;}
        [[nodiscard]] inline float z() const noexcept {return m_z;}
        [[nodiscard]] inline float r() const noexcept {return m_x;}
        [[nodiscard]] inline float g() const noexcept {return m_y;}
        [[nodiscard]] inline float b() const noexcept {return m_z;}
        [[nodiscard]] inline float u() const noexcept {return m_x;}
        [[nodiscard]] inline float v() const noexcept {return m_y;}
        [[nodiscard]] inline float w() const noexcept {return m_z;}
        
        [[nodiscard]] inline Vec3  cross   (Vec3 v) const noexcept;
        [[nodiscard]] inline float dot     (Vec3 v) const noexcept;
        [[nodiscard]] inline float length  ()       const noexcept;
        [[nodiscard]] inline Vec3  norm    ()       const noexcept;
        
        inline void  normalize() noexcept;
private:
        float m_x;
        float m_y;
        float m_z;
};

class Ray {
public:
        Ray(Vec3 start, Vec3 direction) : m_start(start), m_direction((direction)) {};
        ~Ray() = default;
public:
        [[nodiscard]] inline Vec3& start()     const noexcept {return const_cast<Vec3&>(m_start);}
        [[nodiscard]] inline Vec3& direction() const noexcept {return const_cast<Vec3&>(m_direction);}
        
        [[nodiscard]] inline Vec3 at(float t) const noexcept {return (m_start + m_direction * t);};
private:
        Vec3 m_start;
        Vec3 m_direction;
};