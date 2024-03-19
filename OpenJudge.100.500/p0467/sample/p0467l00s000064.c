#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define STR 10000000000
int main(){
    int a,b,c,k;
    int cnt = 0;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(a>=k){
        printf("%d\n",k);
    }if((a+b)>=k){
        printf("%d\n",a);
    }else{
        printf("%d\n",a+((k-a-b)*-1));
    }
    return 0;
}