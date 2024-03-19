#include<stdio.h>
#include<math.h>
int main(){
int a,b,value,result;

scanf("%d %d",&a,&b);
if(a<b){
	printf("1");
}
else if(a>b){
	value=(a+1)/(b+1);
	printf("%d",value+1);
}
return 0;
}