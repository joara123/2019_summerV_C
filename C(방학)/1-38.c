#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int arrayA[100];
    int i;
    int temp;
    
    srand((int)time(NULL));
    for(i=0; i<100; i++){
        arrayA[i]=rand();
    }

    for(i=0; i<100; i++){
        for(int j=0; j<100-i-1; j++){
            if(arrayA[j]>arrayA[j+1]){
                temp = arrayA[j];
                arrayA[j]=arrayA[j+1];
                arrayA[j+1]=temp;
            }
        }

    }

    for(i=0; i<100; i++){
        printf("%d ", arrayA[i]);
    }

    return 0;
}