#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000000

int prime[2000000];

void shaifa(){
    int i,j;
    for (i=2;i<max;i++) prime[i]=0;
    for (i=2;i<max;i++){
        if (prime[i]==0){
            for (j=i+i;j<max;j+=i){
                prime[j]=1;
            }
        }
    }
}

int main(){
    int n,sum,i;
    shaifa();
    while (scanf("%d",&n)!=EOF){
        sum=0;
        for (i=2;i<=n;i++)
            if (prime[i]==0) sum++;
        printf("%d\n",sum);
    }
}