#include<stdio.h>
int main(void)
{
	int a,b,n,cnt,i;
	while(scanf("%d %d",&a,&b)!=EOF){
		n=a+b;
		cnt=0;
		while(n!=0){
			n=n/10;
			cnt++;
			//printf("cnt=%d n=%d\n",cnt,n);
		}
		printf("%d\n",cnt);
	}	
	return 0;
}

