#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "math/point.h"
#include "math/rect.h"

typedef struct triangle_t {
    point_t p1, p2, p3;
} triangle_t;

triangle_t triangle(point_t p1, point_t p2, point_t p3);
triangle_t equilateral_triangle(void);
triangle_t random_triangle(float radius);
triangle_t triangle_sorted_by_y(triangle_t t);
void rect_as_triangles(rect_t rect, triangle_t triangles[2]);

triangle_t triangle_mat3x3_product(triangle_t t, mat3x3 m);

#endif  // TRIANGLE_H_
