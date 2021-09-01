#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int anArray[10];
    int i;
    int sum = 0;
    int max, min;

    srand((int)time(NULL));
    for(i=0; i<10; i++){
        anArray[i]=rand()%100;
    }
    for(i=0; i<10; i++){
        printf("%d ",anArray[i]);
    }

    max = anArray[0];
    min = anArray[0];

    for(i=0; i<10; i++){
        if(anArray[i]>max){
            max = anArray[i];
        }
        else if (anArray[i]<min){
            min = anArray[i];
        }
    }

    printf("\nmax = %d\n", max);
    printf("min = %d", min);

    return 0;
}