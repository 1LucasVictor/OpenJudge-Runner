#include<stdio.h>

int main(void){

long long n;
long long dig;
while(scanf("%lld",&n) != EOF){
if(n == 0){
break;
}
long long sum = 0;
while(n){
dig = n % 10;
sum = sum + dig;
n = n / 10;
}

printf("%lld\n",sum);

}
return 0;
}
