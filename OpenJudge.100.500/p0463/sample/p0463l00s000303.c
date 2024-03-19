#include<stdio.h>
int main(){
	int T,m;
	scanf("%d",&T);
	if(0<=T<10){
		m=T%1;
		if(m==2||m==4||m==5||m==7||m==9) printf("hon");
		if(m==0||m==1||m==6||m==8) printf("pon");
		if(m==3) printf("bon");
     }
    else if(10<=T<100){
    	m=T%10;
    	if(m==2||m==4||m==5||m==7||m==9) printf("hon");
		if(m==0||m==1||m==6||m==8) printf("pon");
		if(m==3) printf("bon");
	} 
	else if(100<=T<1000){
    	m=(T%100)%10;
    	if(m==2||m==4||m==5||m==7||m==9) printf("hon");
		if(m==0||m==1||m==6||m==8) printf("pon");
		if(m==3) printf("bon");
	}
	return 0;
} 