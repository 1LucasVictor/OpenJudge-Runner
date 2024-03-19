#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i=0;
    while(a*i-(i-1)<b){
        i++;
    }
    printf("%d\n",i);
    return 0;
}