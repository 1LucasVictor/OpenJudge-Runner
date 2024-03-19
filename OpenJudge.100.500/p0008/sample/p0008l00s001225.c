#include<stdio.h>
#include<stdlib.h>


int main(){
	int *data=malloc(sizeof(int)*1000000);
	int N,R;
	int A,B;
	while(scanf("%d",&N)!=EOF){
		for(A=2;A<=N;A++)
			data[A]=0;
		R=0;A=2;
		while(1){
			R++;
			for(B=1;A*B<=N;B++)
				data[A*B]=1;
			for(;data[A] && A<=N;A++);
			if(A>N)
				break;
		}
		printf("%d\n",R);
	}
	free(data);
	return 0;
}