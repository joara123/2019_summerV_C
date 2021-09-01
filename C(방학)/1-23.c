#include <stdio.h>

int main (int argc, char ** argv){
    int i;    
    int n;
    int head = 0;
    int mid = 0;
    int rear = 1;

    printf("n: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("%d \n", head);
        mid=head+rear;
        head=rear;
        rear=mid;
    }

    return 0;
}