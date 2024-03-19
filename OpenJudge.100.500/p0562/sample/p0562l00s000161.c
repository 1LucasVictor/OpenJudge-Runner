#include<stdio.h>
#include<stdlib.h>


int main(){

    int A,a,b,i;
    scanf("%d %d",&a,&b);

    if(b==1){
        printf("0\n");
        return 0;
    }

    A=a;
    for(i=1;A<b;A=A+a-1){
        i++;
    }
    
    printf("%d\n",i);

    return 0;
}