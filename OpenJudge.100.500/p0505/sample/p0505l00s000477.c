#include<stdio.h>
int main(void){
int H,N,A,a=0,sum=0;
scanf("%d %d",&H,&N);
while(a<N){
    scanf("%d",&A);
    sum+=A;
    ++a;
}
if(H-sum>0)
puts("No");
else
puts("Yes");
return 0;
}