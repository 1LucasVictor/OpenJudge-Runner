#include<stdio.h>
int main()
{
	int A,B,cnt;
	scanf("%d%d",&A,&B);
	if(A>=B){
		printf("1\n");
	}else{
		for(int i=1;i<=30;i++){
			cnt=A*i-i+1;
			if(cnt>=B){		
				printf("%d\n",i);
				break;
			}
		}
	}
}


