#include <project.h>

double rad(double angle){
    return deg * (PI / 180.0);
}

double stairsLenght(double height, double angle){
    double distance = height / sin(rad(angle));
    return sqrt(pow(distance) - pow(height));
}
