#include<stdio.h>
#include<math.h>
int main(){
    long l, r, i, j, k, s, s1;
    long min = s1 = 2020;
    long mod = 2019;
    int count = 0;
    scanf("%ld %ld", &l, &r);
    for(i = l; i < l+2019; i++){
        count = 0;
        for(j = i + 1; j <= r; j++){
            s = (i*j)%mod;
            if(min > s) min = s;
            count++;
            if(count > 2020)break;
        }
    }
    printf("%ld\n", min);
    return 0;
}
