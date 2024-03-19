#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>
typedef long long llint;
llint min2(llint a,llint b){
    return a>=b?b:a;
}

int main(void){
    llint block=0,count=0,n,i;
    char s[200000];
    scanf("%s",s);
    n = strlen(s);
    for(i=0;i<n;i++){
        if(s[i]=='1') count++;
    }
    block = 2*min2(count,n-count);


    printf("%lld\n",block);
    return 0;
}