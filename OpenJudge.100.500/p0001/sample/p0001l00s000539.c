#include <stdio.h>
int main(void){
         int sum,a,b;
        while(scanf("%d %d",&a,&b)!=EOF){
       
        
        sum=a+b;
        
        if(0<=sum&&sum<=9)
        printf("1\n");
        if(10<=sum&&sum<=99)
        printf("2\n");
        if(100<=sum&&sum<=999)
        printf("3\n");
        if(1000<=sum&&sum<=9999)
        printf("4\n");
        if(10000<=sum&&sum<=99999)
        printf("5\n");
        if(100000<=sum&&sum<=999999)
        printf("6\n");
        if(1000000<=sum&&sum<=9999999)
        printf("7\n");
        }
}


