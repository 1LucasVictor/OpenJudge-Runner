

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#define INFINI 100000001


int main(){

int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);

if(b<c)
    printf("0");
else if(b==c) printf("1");
else{
    int maxmin=(a<c)?c:a;
    int minmax=(b<d)?b:d;
    printf("%d",minmax-maxmin);
}
}
