#include <stdio.h>
#include <string.h>

int main(void){
	int i,j,n,max=0,sum;
	int A[5000];
	char str[100];

	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d",&n);
	while(n!=0){
		for(i=0;i<n;i++){
			fgets(str,sizeof(str),stdin);
			sscanf(str,"%d",&A[i]);
		}
		for(i=0;i<n;i++){
			sum=0;
			for(j=i;j<n;j++){
				sum+=A[j];
				if((i==0 && j==0) || max<sum)
					max=sum;
			}
		}
		printf("%d\n",max);
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d",&n);	
	}
	return 0;			
}