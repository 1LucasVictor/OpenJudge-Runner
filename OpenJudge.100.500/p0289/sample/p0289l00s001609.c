#include <stdio.h>
int main(void) {
  int a,b,t;
scanf("%d%d",&a,&b);
if(a<b){
	t=a;
	a=b;
	b=t;
}
for(;;){
if(b==0)break;	
t=a%b;
a=b;
b=t;
}
printf("%d\n",a);
  return 0;
}

