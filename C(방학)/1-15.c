#include <stdio.h>

int main(int argc, char ** argv){
    float C;
    float F;

    for(float F = 0; F <= 300; F++){

        C= (5.0f/9.0f)*(F-32);
        
        printf("F:%f,  C:%f\n", F, C);
        F=F+19;
    }

    return 0;
}