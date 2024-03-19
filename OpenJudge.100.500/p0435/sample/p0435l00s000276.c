#include<stdio.h>
#include<math.h>
int main(void){
    long long int n, d, i, x, y,count=0; 
scanf("%lld %lld", &n, &d);
for(int i = 0; i<n;i++){
    scanf("%lld %lld", &x, &y);
    if(sqrt(x*x+y*y)<=d) count++;
    }
printf("%d\n", count);
}
