#include <stdio.h>

int main(int argc, char ** argv){
    int num;
    int m50000;
    int m10000;
    int m5000;
    int m1000;
    int m500;
    int m100;


    printf("num: ");
    scanf("%d",&num);

    m50000=num/50000;
    num%=50000;
    
    m10000=num/10000;
    num%=10000;

    m5000=num/5000;
    num%=5000;

    m1000=num/1000;
    num%=1000;

    m500=num/500;
    num%=500;

    m100=num/100;
    num%=100;

    printf("50000: %d\n", m50000);
    printf("10000: %d\n", m10000);
    printf("5000: %d\n", m5000);
    printf("1000: %d\n", m1000);
    printf("500: %d\n", m500);
    printf("100: %d", m100);

    
}