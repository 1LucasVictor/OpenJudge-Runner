#include<stdio.h>

int main(void){

	int sosuu[100000],kazu,n,i,j;

	while(scanf("%d",&n)!=EOF){
		kazu=n-1;
		for(i=2;i<=n;i++){
			sosuu[i]=1;
		}
		for(i=2;i<=n;i++){
			if(sosuu[i]==1){
				for(j=i*2;j<=n;j+=i){
					if(sosuu[j]==1){
						kazu-=1;
						sosuu[j]=0;
					}
				}
			}
		}
		printf("%d\n",kazu);
		
	}

	return 0;
}