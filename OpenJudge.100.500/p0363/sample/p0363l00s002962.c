#include<stdio.h>

int main(void){
int a,b,c,max=0,min=0,mid=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

  if(a>b){
   max=a;
   min=b;
    if(max<=c){
	mid=max;
	max=c;
}else if(min>=c){
	mid=min;
	min=c;
}
}


else if(a<=b){
   max=b;
   min=a;
 if(max<c){
	mid=max;
	max=c;
}else if(min>=c){
	mid=min;
	min=c;
}
  }

printf("%d %d %d\n",min,mid,max);

return 0;
}
