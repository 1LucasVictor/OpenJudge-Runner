#include <stdio.h>
#include <math.h>

int main(){
    
    int i,j;
    scanf("%d %d",&i,&j);
    i = pow(100,i);
    if(j==100)
    i=101*i;
    
    i*=j;
    
    printf("%d\n",i);
    
    return 0;
}        