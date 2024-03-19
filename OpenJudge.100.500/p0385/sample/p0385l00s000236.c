#include<stdio.h>
int main(void){
int i,r,t=0;
while(1){
scanf("%d",&i);
if(i==0){break;}else{
for(r=0;r<1000;r++){
t+=i%10;
i/=10;
}
printf("%d\n",t);
t=0;
}
}
return 0;
} 