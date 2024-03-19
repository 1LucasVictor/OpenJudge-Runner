#include <stdio.h>
int main(void)
{
int N,A[1000],i=0;


scanf("%d",&N);
while(i<N){
scanf("%d",&A[i]);
i++;
}
for(i=0;i<N;i++){
if(A[i]%2==0)
if(A[i]%3!=0&&A[i]%5!=0){
printf("DENIED");
break;
}
}
printf("APPROVED");
return 0;
}