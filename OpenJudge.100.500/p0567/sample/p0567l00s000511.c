#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int a,b,c=0;
    scanf("%d%d%d",&a,&b,&c);
    if(c-(a-b)<0){printf(0);}
    else{printf("%d",c-(a-b));}
}