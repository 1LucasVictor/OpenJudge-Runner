#include<stdio.h>

int main(){

	int n;
	int i,j;
	int count=0;
	int flag=0;
	while(scanf("%d",&n)!=EOF){
		for(i=2;i<n+1;i++){

			for(j=2;j<i;j++){
				if(i%j==0){
					flag=1;
					break;
				}
				if(j!=2)
					j++;
			}
			if(flag==0){
				count++;
			}
			flag=0;
			if(i!=2)
				i++;		
		}
		printf("%d\n",count);
		count = 0;
		flag=0;
	}

	return 0;
}