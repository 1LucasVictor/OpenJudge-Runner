#include <stdio.h>
 
int main(void)
{
	int s_1,s_2,s_3;
	int N;
	int u_1,u_2,u_3;
	scanf("%d",&N);
	
	s_1=N/100;
	s_2=(N-(100*s_1))/10;
	s_3=(N-(100*s_1)-(10*s_2));
	
	if(s_1==7){
		u_1=1;
	}else{
		u_1=0;
	}
	
	if(s_2==7){
		u_2=1;
	}else{
		u_2=0;
	}
 
if(s_3==7){
		u_3=1;
	}else{
		u_3=0;
	}
 
if(u_1+u_2+u_3>=1){
	printf("Yes");
    }else{
        printf("No");
    }

	
	return 0;
}
	