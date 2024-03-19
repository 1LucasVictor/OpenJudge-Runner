#include <stdio.h>
int main(void){
long N;
long K;
long a,b;
scanf("%ld",&N);
scanf("%ld",&K);
a=N%K;
b=K-a;
if(a<=b){
	printf("%ld",a);
}
if(a>=b){
	printf("%ld",b);
}

return 0;
}