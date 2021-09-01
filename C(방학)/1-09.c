#include <stdio.h>

int main(int argc, char ** argv){
    int h; // 높이
    int n; // 밑변
    double t;

    printf("h:");
    scanf_s("%d", &h);

    printf("n:");
    scanf_s("%d", &n);

    t=h*n*0.5;
    printf("%f",t);

    return 0;

}