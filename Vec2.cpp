#include "Vec2.h" 
#include <cmath>

// Default constructor
Vec2::Vec2(): x(0), y(0) {}

// Constructor with initializer list
Vec2::Vec2(float xin, float yin) : x(xin), y(yin) {};

bool Vec2::operator==(const Vec2& vec) const {
	return (x == vec.x && y == vec.y); 
}

bool Vec2::operator==(const float val) const {
	return (x == val && y == val); 
}

bool Vec2::operator!=(const Vec2& vec) const {
	return (x != vec.x && y != vec.y); 
}

Vec2 Vec2::operator+(const Vec2& vec) const {
	return Vec2(x + vec.x, y + vec.y); 
}

Vec2 Vec2::operator-(const Vec2& vec) const {
	return Vec2(x - vec.x, y - vec.y); 
}

Vec2 Vec2::operator/(const float val) const {
	return Vec2(x / val, y / val);
}

Vec2 Vec2::operator*(const float val) const {
	return Vec2(x * val, y * val);
}

void Vec2::operator+=(const Vec2& vec) {
	x += vec.x;
	y += vec.y;
}

void Vec2::operator-=(const Vec2& vec) {
	x -= vec.x;
	y -= vec.y;
}

void Vec2::operator*=(const float val) {
	x *= val;
	y *= val;
}

void Vec2::operator/=(const float val) {
	x /= val;
	y /= val;
}

float Vec2::dist(const Vec2& vec) const {
	return sqrt(pow((x - vec.x), 2) + pow((y - vec.y), 2));
}

bool Vec2::operator>(const float val) const {
	return ((x > val) && (y > val));
}

void Vec2::normalize(){
    double l { std::sqrt(x * x + y * y)};
    x = x/l;
    y = y/l;
}

Vec2 Vec2::normalize(Vec2 vec){
    double l {std::sqrt(vec.x * vec.x + vec.y * vec.y)};
    return Vec2(vec.x/l,vec.y/l); 
}




