#include<stdio.h>
int main(void){
int k;
scanf("%d",&k);
int a,b;
scanf("%d %d",&a,&b);
int i,min,max;
max = a>b?a:b; min = a>b ? b:a; 
for(i = min; i<= max; i++){
if(i%k == 0){
printf("OK");
return 0;
}
}
printf("NG");
return 0;
}