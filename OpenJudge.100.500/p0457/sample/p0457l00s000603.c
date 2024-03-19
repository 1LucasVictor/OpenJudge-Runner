#include<stdio.h>

int main(){
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	
	int a[N],b[M];
	int i;
	
	for(i = 0;i < N;i++)
		scanf("%d",&a[i]);
	for(i = 0;i < M;i++)
		scanf("%d",&b[i]);
	
	int sum = 0;
	int count = 0;
	int lo ;
	if(N < M)
		lo = N;
	else
		lo = M;
	int j;
	for(i = 0,j = 0;i < lo && j < lo;){
		if(a[i] < b[j]){
			sum += a[i];
		//	printf("a[i] =  %d\n",a[i]);
			i++;
		}else{
		//	printf("b[j] =  %d\n",b[j]);
			sum += b[j];
			j++;
		}
		if(sum > K)
			break;
		else
			count++;
			
	//	printf("sum = %d\n ",sum);
	}
	
	if(lo == N){
		for(i = j ;i < M;i++){
			sum += b[i];
			if(sum > K)
				break;
			else
				count++;	
		}
	}else{
		for(i = i;i < N;i++){
			sum += a[i];
			if(sum > K)
				break;
			else
				count++;
		}	
	}
	
	printf("%d",count);
	
	return 0; 
}