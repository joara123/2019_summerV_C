#include <stdio.h>

int main(int argc, char ** argv){
    int a,b,c,d,e,f,g,h,i,j;
    int sum;
    int M;

    printf("a b c d e f g h i j\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    sum = (a+b+c+d+e+f+g+h+i+j);
    M = (a+b+c+d+e+f+g+h+i+j)/10;

    printf("sum: %d\n",sum);
    printf("M: %d", M);
}