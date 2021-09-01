#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int arrayA[100];
    int i, j, temp;
    int length = sizeof(arrayA) / sizeof(int);

    srand((int)time(NULL));
    for(i=0; i<100; i++){
        arrayA[i]=rand();
    }

    for (i=0; i<length; i++){
        temp = arrayA[i];
        j = i-1;
        while(j>= 0 && arrayA[i]>temp){
            arrayA[j+1]=arrayA[j];
            j= j-1;
        }
        arrayA[j+1]=temp;
    }
    for(i=0; i<length; i++){
        printf("%d ", arrayA[i]);
    }
    return 0;
}