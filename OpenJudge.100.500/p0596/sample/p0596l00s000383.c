#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int asort(const void *A,const void *B){
    return *(long long*)A>*(long long*)B?1:0;
}

int dsort(const void *A,const void *B){
    return *(long long*)A<*(long long*)B?1:0;
}

long long gcd(long long A,long long B){
    return B?gcd(B,A%B):A;
}

long long min(long long A,long long B){
    return A<B?A:B;
}

int main(void){
    char s[100500];
    scanf("%s",s);
    int count0=0,count1=0,ans=0;
    for (int i=0; i<strlen(s); i++){
        if (s[i]=='1'){
            if (count0==0){
                count1++;
            } else {
                count0--;
                ans+=2;
            }
        } else {
            if (count1==0){
                count0++;
            } else {
                count1--;
                ans+=2;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
