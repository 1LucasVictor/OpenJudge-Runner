#include <stdio.h>

int main(){

    int N;
    int h=0,m=0,s=0;

    scanf("%d",&N);

    while(N>=3600){
        h++;
        N -= 3600;
    }

    while(N>=60){
        m++;
        N -= 60;
    }

    while(N>0){
        s++;
        N -= 1;
    }

    printf("%d:%d:%d\n",h,m,s);
    
}
