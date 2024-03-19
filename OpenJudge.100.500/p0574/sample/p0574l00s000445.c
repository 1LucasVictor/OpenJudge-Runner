#include <stdio.h>
int main(void){
    int a[4],i,b;
    
    scanf("%d",&b);
    for(i=0;i<4;i++){
        a[i]=b%10;
        if(i>0){
            if(a[i]==a[i-1]){
                printf("Bad\n");
                return 0;
            }
        }
        b/=10;
    }
    printf("Good\n");
    return 0;
}
