#include <stdio.h>
int main()
 {
int i;
int K,A,B;
A = 0;
B = 0;
K = 0;
scanf("%d",&K); scanf("%d",&A); scanf("%d",&B);
 
for(i=A;i<=B+1;i++){
if(i%K==0){
printf("OK");
break;
}
if(i==B){
printf("NG");
break;
}
}
 
return 0;
}