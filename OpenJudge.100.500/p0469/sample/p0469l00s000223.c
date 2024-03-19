#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define STR 100
int main(){
    int k,a,b;
    scanf("%d %d %d",&k,&a,&b);
    for(int i=a;i<b+1;i++){
        if(i%k==0){
            printf("OK");
            return 0;
        }
    }
    printf("No");
    return 0;
}