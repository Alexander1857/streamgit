#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle() {
	radius = 0;
}
void Circle::set_r(float newradius) {
	if (newradius >= 0) {
		radius = newradius;
	}
}
Circle::Circle(float newradius) {
	set_r(newradius);
}

float Circle::get_r() {
	return radius;

}
float Circle::diameter() {
	return 2 * radius;
}

float Circle::area() {
	return M_PI * radius*radius;
}

float Circle::lenght() {
	return 2 * M_PI*radius;
}


