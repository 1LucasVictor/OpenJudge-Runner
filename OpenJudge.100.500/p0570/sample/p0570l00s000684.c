#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a,b,aa,bb;
    scanf("%d %d",&a,&b);
    int flag=0;
    for(int c=0;c<=1000000000;c++){
        aa=a-c;
        bb=b-c;
        if(abs(aa)==abs(bb)){
            printf("%d",c);
            flag=1;
        }
    }
    if(flag==0){
        printf("IMPOSSIBLE");
    }
    return 0;
}