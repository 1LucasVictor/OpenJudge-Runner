#include<stdio.h>
int main(void)
{
	long long a,b,yaku,bai,c,box;
	int i;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		for(i=1;i<=b;i++){
			if(a*i%b==0){
				bai=a*i;
				break;
			}
		}
		if(a<b){
			box=a;
			a=b;
			b=box;
		}
		while(a%b>0){
			c=a%b;
			a=b;
			b=c;
		}
		yaku=b;
		printf("%ld %ld\n",yaku,bai);
	}
	return 0;
}
