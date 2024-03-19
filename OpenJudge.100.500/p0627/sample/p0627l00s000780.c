#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ad=a+b;
	int s=a-b;
	int m=a*b;
	if(a==0&&b==0){
		printf("0\n");
	}
	else if(ad==s){
		printf("%d",ad);
	}
	else if(ad>s&&ad>m){
		printf("%d",ad);
	}
	else if(s>ad&&s>m){
		printf("%d",s);
	}
	else{
		printf("%d",m);
	}





	return 0;
}