#include <stdio.h>
#include <math.h>

int main(){

	int i[100001],k,j,n;

	for(k=1;k<=100000;k++){
		i[k]=k;
	}

	i[1]=0;

	for(k=2;k<=10000;k++){
		if(i[k]==0)
			continue;
		for(j=k+1;j<=100000;j++){
			if(i[j]%i[k]==0)
				i[j]=0;
			}
	

	
	}

	while(~scanf("%d",&n)){
		j=0;
		for(k=1;k<=n;k++){
			if(i[k]!=0)
				j=j+1;
		}
		printf("%d\n",j);
	}
	return 0;
}