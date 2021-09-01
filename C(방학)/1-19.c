#include <stdio.h>

int main(int argc, char ** argv){
    int i;
    int sum;

    for(i=1;i<1000;i+=2){
        sum=sum+i;
    }
    printf("sum: %d", sum);

    return 0;
}