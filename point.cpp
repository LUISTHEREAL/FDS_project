#include"point.hpp"

Point2D::Point2D()
  : x(0.0f), y(0.0f)
{}

Point2D::Point2D(float x, float y)
  : x(x), y(y)
{}

void Point2D::operator+=(const Point2D & dv) {
  x += dv.x;
  y += dv.y;
}
