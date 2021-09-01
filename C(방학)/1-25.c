#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int rand_num = 0;
    int count = 0;
    int guess = 0;

    srand((unsigned)time(0));
    rand_num = rand() % 100;

    while (1){
        printf("?: ");
        scanf("%d",&guess);
        if(guess == rand_num){
            break;
        }
        else if(guess<rand_num){
            printf("up");
        }
        else{
            printf("down");
        }
        count++;
    }
    printf("%d count", count);
    return 0;
}