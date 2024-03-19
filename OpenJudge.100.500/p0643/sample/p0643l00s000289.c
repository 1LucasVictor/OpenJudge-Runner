#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if((a*b)%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    return 0;
}