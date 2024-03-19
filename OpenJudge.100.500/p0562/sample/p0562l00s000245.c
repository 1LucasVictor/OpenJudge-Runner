#include<stdio.h>
#include<stdlib.h>


int main(){

    int a,b,i;
    scanf("%d %d",&a,&b);

    if(b==1){
        printf("0\n");
        return 0;
    }

    for(i=1;a<b;a=a+a-1){
        i++;
    }
    
    printf("%d\n",i);

    return 0;
}