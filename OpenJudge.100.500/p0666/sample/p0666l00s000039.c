#include<stdio.h>

int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    int c = b - a;
    if(c <= 0){
        printf("delicious\n");
    }
    else if(c > x)
    {
        printf("dangerous\n");
    }
    else 
    {
        printf("safe\n");
    }
    
    
}