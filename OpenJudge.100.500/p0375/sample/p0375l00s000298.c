#include "stdio.h"
void call(int n){
int x,i=1;
while(++i<=n){
x=i;
if((x%3)==0){
printf(" %d",i);
}else if((x%10)==3){
printf(" %d",i);
}else{
x/=10;
}
}
puts("");
}
int main(void){
int n;
scanf("%d",&n);
call(n);
return 0;
}