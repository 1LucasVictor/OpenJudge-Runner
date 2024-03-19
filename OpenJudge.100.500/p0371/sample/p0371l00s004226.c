#include "stdio.h"
int main(void){
int i,a,b,min,max;
long sum=0;
scanf("%d",&a); 
for(i=0;i<a;i++){
scanf("%d",&b);
if(i==0){
min=b;
max=b;
}else if(min>b){
min=b;
}else if(max<b){
max=b;
}
sum+=b;
}
printf("%d %d %d\n",min,max,sum);
return 0;
}