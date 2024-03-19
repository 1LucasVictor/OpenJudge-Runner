#include<stdio.h>
#include<math.h>
int main(){
    long l, r, i, j, k, s;
    long min = 2020;
    long mod = 2019;
    scanf("%ld %ld", &l, &r);
    for(i = l; i < r; i++){
        if(i%mod > min)continue;
        for(j = i + 1; j <= r; j++){
            s = (i*j)%mod;
            if(min > s) min = s;
        }
    }
    printf("%ld\n", min);
    return 0;
}
