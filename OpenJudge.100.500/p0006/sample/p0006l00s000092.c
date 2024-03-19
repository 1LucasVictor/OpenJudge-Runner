#include <stdio.h>
 
int main(void){
 
int n, i, debt;
 
debt=100000;

 scanf("%d", &n);
 
for(i=0; i<n; i++){
 
debt=debt+(debt/20);
 
if(debt%1000!=0)
debt=debt+(1000-(debt%1000));
 
}

 printf("%d\n", debt);
 
return 0;
 
}