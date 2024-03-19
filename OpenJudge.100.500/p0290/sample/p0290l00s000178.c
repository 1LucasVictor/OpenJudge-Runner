#include<stdio.h>
#include<math.h>

int prime (int);
int main(){
	//素数判定プログラム
	int N,a[10000];
	int i,count=0;

	scanf("%d",&N);

	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}	

	for(i=0;i<N;i++){
		if(prime(a[i]) == 0) count++;
	}

	printf("%d\n",count);	
	return 0;
}

int prime (int a)
{
	int j,b;
	int Ans,count;

	Ans=0;
	b=0;

	if(a == 2){
		b = 0;
		return b;
	}
	else if (a%2 == 0){
		b = 1;
			return b;
		}
	else{
		for(j=3;j<=sqrt(a);j+=2)
		{
			if(a%j == 0){
				b=1;
				break;
			}
		}
	}
	return b;
}