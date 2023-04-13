#include "ray_math.h"
#include <cmath>

Vec3 Vec3::cross(Vec3 v) const noexcept {
        return {( y()*v.z() - z()*v.y() ), ( z()*v.x() - x()*v.z() ), ( x()*v.y() - y()*v.x() )};
}
float Vec3::dot(Vec3 v) const noexcept {
        return x() * v.x() + y() * v.y() + z() * v.z();
}
float Vec3::length() const noexcept {
        return std::sqrt(dot({m_x, m_y, m_z}));
}
Vec3 Vec3::norm() const noexcept {
        auto len = length();
        return {m_x/len, m_y/len, m_z/len};
}
void Vec3::normalize() noexcept {
        auto len = length();
        m_x /= len;
        m_y /= len;
        m_z /= len;
}
