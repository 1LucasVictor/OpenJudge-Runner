#include<stdio.h>
int main(){
    int a,b,c,i,cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;b>=a;a++){
        if(c%a==0) cnt++;
    }
    printf("%d\n",cnt);
}