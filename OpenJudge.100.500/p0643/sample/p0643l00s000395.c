#include <stdio.h>
 
int main(void) {
 
int a,b;
scanf("%d %d",&a,&b);
 
int x = a*b;
int y = x%2;
 
if(y==0){
printf("Even");
}else{
printf("Odd");
}
}