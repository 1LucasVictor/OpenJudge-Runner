#include<stdio.h>
	int main(){
		int a,i,sum,b[100000],j;
		for(i=2;i<100000;i++)
				b[i]=1;
			for(i=2;i<=100000;i++)
				if(b[i]==1){
					for(j=i*2;j<=100000;j+=i)
						b[j]=0;
			}
		while(scanf("%d",&a)!=EOF){
			sum=0;
			for(i=2;i<=a;i++)
				if(b[i]==1)
					sum++;
			printf("%d\n",sum);
		}
		return 0;
}