#include <stdio.h>

int 
main(){
	int N,K;
	int L[100000];

	scanf("%d%d",&N ,&K);
	int i,j;
	
	for(i=0;i<N;i++)scanf("%d",&L[i]);
	
	double sum=0;
	double cnt=0;
	double tmp,NN;
	for(i=0;i<N-1;i++){
		
		if(L[i]>K)cnt+=N-i;
		else
		{
			sum = L[i];
			for(j=i+1;j<N;j++){
				sum+=L[j];
			
				if(sum>=K){
					cnt+=N-j;
				//	printf("%d %d %d\n",i,j,(int)sum);
					break;
//					tmp = N-j;
//					NN = j;
				}
//				#endif
			}
			sum = 0;
		}
	}
	printf("%d\n",(int)cnt);
 return 0;
}