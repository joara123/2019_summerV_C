#include <stdio.h>

int main(int argc, char ** argv){
    int num;
    int sum;

    print("number:");
    scanf_s("%d",&num);

    while(num){
        sum+=num%10;
        num/=10;
    }
    printf("%d",);
}