#include <stdio.h>
int main(void){
int n,a,min,max,i;
long int sum;
max=-1000000;
min=1000000;
sum=0;
scanf("%d\n",&n);

for(i=0;i<n;i++){
    scanf("%d",&a);
    sum+=a;
    if(min>a) min=a;
    if(max<a) max=a;
}
printf("%d %d %d\n",min,max,sum);
return 0;
}

