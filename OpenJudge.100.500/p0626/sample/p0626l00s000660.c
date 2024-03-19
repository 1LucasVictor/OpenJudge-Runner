#include <stdio.h>
#include <math.h>

int main (){
    int d,n,c;
    scanf("%d %d",&d,&n);    
    if(d == 0)  printf("%d",n);
        else{
         c = pow(100,d)*n;
        printf("%d",c);
    }
 
}