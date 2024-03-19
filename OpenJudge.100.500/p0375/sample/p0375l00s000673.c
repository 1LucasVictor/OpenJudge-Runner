#include<stdio.h>
int main(){
int a,b=0,c,d;
scanf("%d",&a);
while(1){
	b++;
	if(b%10==3){
printf(" %d",b);
}
if(b%10!=3&&b%3==0){
printf(" %d",b);
}

if(b==a)
break;
}
printf("\n");
return 0;
}