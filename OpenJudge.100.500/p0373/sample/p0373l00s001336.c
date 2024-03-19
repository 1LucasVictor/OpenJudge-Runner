#include<stdio.h>
int main(void){//float?????????double???
int i,j,h,w,a;
a=1;

while(a==1){
scanf("%d %d",&h,&w);
if(h==0&&w==0){
	break;
}
for(i=1;i<=h;i++){
	 for(j=1;j<=w;j++){
		if((i>=2&&j>=2)&&(i!=h&&j!=w)) printf(".");
		else printf("#");
	}
	printf("\n");
}
printf("\n");
}
return 0;
}