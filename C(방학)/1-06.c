#include <stdio.h>

int main (int argc, char ** argv){
    double r = 4;
    double pi = 3.14;
    float area;
    float l;

    l=2*r*pi;
    area=r*r*pi;

    printf("%f\n", l);
    printf("%f", area);
}