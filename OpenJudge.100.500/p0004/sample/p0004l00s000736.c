#include<stdio.h>
int GCD(int a,int b);
long long int LCM(long long int a,long long int b);
int main(void)
{
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		if(a>b){
			long long int temp=a;
			a=b;
			b=temp;
		}
		printf("%d ",GCD(a,b));
		printf("%lld\n",LCM(a,b));
	}
	return 0;
}
int GCD(int a,int b){
	while(a>0&&b>0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		}
	}
	if(a==0){
		return b;
	}
	else{
		return a;
	}
}
long long int LCM(long long int a,long long int b){
	for(long long int i=1;i<=a*b;i++){
		long long int temp=GCD(a,b)*i;
		if(temp%a==0&&temp%b==0){
			return temp;
			break;
		}
	}
}
