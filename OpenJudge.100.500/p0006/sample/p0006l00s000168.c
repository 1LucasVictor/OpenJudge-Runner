#include<stdio.h>

int main(void){
int a=100000,i,n;

scanf("%d",&n);
for(i=0;i<n;i++){
a=a+(int)((float)a*0.05);
a=(int)((float)(a+999)/1000)*1000;
}
printf("%d\n",a);
	return 0;
}