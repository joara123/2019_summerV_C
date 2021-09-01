#include <stdio.h>

int main (int argc, char ** argv){
    int a,b,c,d,e;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);
    printf("e: ");
    scanf("%d", &e);

    if(a>b){
        if(b>c){
            if(c>d){
                if(d>e){
                    printf("%d",d);
                }
                else{
                    printf("%d",c);
                }
            }
            else{
                if(c>e){
                    printf("%d",d);
                }
                else{
                    printf("%d",d);
                }
            }
        }
        else{
            
            
        }
    }
    else{
        if(b>c){

        }
        else{

        }
    }

}