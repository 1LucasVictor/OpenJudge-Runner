#include <stdio.h>

int main(void) {

int n,i,a;long min,max,sum;
sum=0;max=0;min=1000000;
scanf("%d\n",&n);
if(n==0) exit(0);
for(i=1;i<n;i++){
scanf("%d ",&a);
max=(max<=a) ? a : max;
min=(min>=a) ? a :min;
sum=sum+a;
}
scanf("%d\n",&a);
max=(max<=a) ? a : max;
min=(min>=a) ? a :min;
sum+=a;

printf("%d %d %ld\n",min,max,sum);
return 0;
}