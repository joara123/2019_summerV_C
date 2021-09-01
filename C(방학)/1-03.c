#include <stdio.h>

int main(int argc, char **argv){
    int a = 0b1100001;
    char c = 0b1100001;

    printf("%d %c\n", a, c);
    printf("%d %c\n", c, c);

    return 0;

}