#include <project.h>

double rad(double angle){
    return angle * (PI / 180.0);
}

double stairsLength(double height, double angle){
    double distance = height / sin(rad(angle));
    return sqrt(pow(distance, 2) - pow(height, 2));
}

double circleArea(double radius){
    return PI * pow(radius, 2);
}

double circlePerimeter(double radius){
    return 2 * PI * radius;
}
