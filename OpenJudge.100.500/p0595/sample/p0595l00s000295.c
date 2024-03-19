#include<stdio.h>

int main(){
    int a,b,k,i,temp[100];
    int c=2;
    temp[1]=1;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&k);
    for(i=2;i<=100;i++){
        if(a<i && b<i)break;
        if(a%i!=0)continue;
        if(b%i!=0)continue;
        temp[c++] = i;
    }
    printf("%d\n",temp[k]);
    return 0;
}