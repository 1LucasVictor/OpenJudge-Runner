#include "stdio.h"

int main(){

int A;
int B;
int sum;
int cal;
int desum;
scanf("%d%d\n",&A,&B );
sum=A+B;
cal=A*B;
desum=A-B;
int max=sum;

if(max<cal){
  max=cal;
}
if(max<desum){
  max=desum;
}
printf("%d\n", max);


return 0;




}
