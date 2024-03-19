#include<stdio.h>
#include<stdlib.h>

#define NEW(p,n){p=malloc((n)*sizeof(p[0]));if(p==NULL){printf("not enough memory\n");exit(1);};}
//pの型の変数n個の要素分のメモリを確保し、そのアドレスをpに代入するマクロ

#define INFTY 999999


int main(void){
    int a,b;
    scanf("%d %d",&a, &b);

    if(b%a==0){
        printf("%d\n",a+b);
    }
    else{
        printf("%d\n",b-a);
    }

    return 0;
}