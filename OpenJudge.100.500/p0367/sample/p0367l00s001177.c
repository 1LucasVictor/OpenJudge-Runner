#include<stdio.h>
int main(void){
    int a,b,c,cou=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int x=a;x<=b;x++){
        if(c%x==0)cou++;
    }
    printf("%d\n",cou);
return 0;
}