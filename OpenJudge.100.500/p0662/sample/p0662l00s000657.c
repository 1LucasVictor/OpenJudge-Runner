#include<stdio.h>

int main(void){
    int a,b,c,d,j[2];

    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>c){j[0]=a;}
    else j[0]=c;

    if(b>d){j[1]=d;}
    else j[1]=b;

    if(j[1]<j[0])
        j[1]=j[0];

    printf("%d",(j[1]-j[0]));

    return 0;
}
