#include <stdio.h>
int main(void){
    int n1,n2,n3,min;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2){
        min=n1;
        n1=n2;
        n2=min;
    }
    if(n1>n3){
        min=n1;
        n1=n3;
        n3=n2;
        n2=min;
    }
    if(n2>n3){
        min=n2;
        n2=n3;
        n3=min;
    }
    printf("%d %d %d\n",n1,n2,n3);
    return 0;
}

