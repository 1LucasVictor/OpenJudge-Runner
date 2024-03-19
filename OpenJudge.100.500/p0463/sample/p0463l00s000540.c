#include <stdio.h>
int main(){
	int i;
	int m;
	scanf("%d",&i);
	if(i>999||i<0) printf("error");
	else{
		m=i%10;

	if(m==2||m==4||m==5||m==7||m==9) printf("hon");
	if(m==0||m==1||m==8||m==6) printf("pon");
	if(m==3) printf("bon");}
	return 0;
} 