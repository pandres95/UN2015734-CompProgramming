#include <project.h>

double rad(double angle){
    return angle * (PI / 180.0);
}

double stairsLenght(double height, double angle){
    double distance = height / sin(rad(angle));
    return sqrt(pow(distance, 2) - pow(height, 2));
}
