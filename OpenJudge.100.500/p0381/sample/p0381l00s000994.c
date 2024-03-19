#include<stdio.h>

int main(){
	int n,x,count=0,i,j,k;

	while(1){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)	break;
		for(i=n;i>=3;i--){
			for(j=i-1;j>=2;j--){
				k=x-i-j;
				if(1<=k && k<j)
					count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}