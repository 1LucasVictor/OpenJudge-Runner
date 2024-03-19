#include<stdio.h>
#include<stdlib.h>


int main(){

    int a,b,i;
    scanf("%d %d",&a,&b);

    for(i=1;a<b;a=a+a-1){
        i++;
    }
    
    printf("%d\n",i);

    return 0;
}