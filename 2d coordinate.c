#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point p1, p2;

    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float dist = distance(p1, p2);

    printf("Distance between the points: %.2f\n", dist);

    return 0;
}
