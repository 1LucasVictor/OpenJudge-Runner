#include<stdio.h>

int main(void){
int a,N;
scanf("%d\n", &N);
if(N%2==0){
a=N/2;
}
else{
a=N/2 + 1;
}
printf("%d", a);
return 0;
}