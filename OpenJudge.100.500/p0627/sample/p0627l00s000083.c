#include <stdio.h>
int main(void){
    int a,b,x,y,z;
  
    scanf("%d",&a);
    scanf("%d",&b);
    x=a+b;
    y=a-b;
    z=a*b;
    if((x<=y && z<=x)||(x<=z && z<=y)){
        printf("%d",y);
    }else if((x<=y && y<=z)||(y<=x && x<=z)){
        printf("%d",z);
    }else{
        printf("%d",x);
    }    
    // Your code here!
    
}
