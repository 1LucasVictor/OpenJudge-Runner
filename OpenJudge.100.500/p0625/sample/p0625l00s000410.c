#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    c=a+b;
    if(c<=16){
        if(a>8 || b>8){
            if(c%2==0){
              printf("Yay!\n");  
            }else{
                printf(":(\n");
            }
        }else{
            printf("Yay!\n");
        }
    }else{
        printf(":(\n");
    }
    return 0;
}



