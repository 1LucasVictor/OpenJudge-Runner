#include<stdio.h>
#include<math.h>
int main(){
    long l, r, i, j, k, s, s1;
    long min = s1 = 2020;
    long mod = 2019;
    scanf("%ld %ld", &l, &r);
    for(i = l; i < r; i++){
        for(j = i + 1; j <= r; j++){
            s = (i*j)%mod;
            if(min > s) min = s;
            if(s1 < s)j+=2010;
            s1 = s;
        }
    }
    printf("%ld\n", min);
    return 0;
}
