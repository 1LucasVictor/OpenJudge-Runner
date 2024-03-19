#include<stdio.h>
#include<math.h>
int main(void){
	int n, i, j,ans,plus;

	while(scanf("%d",&n) != EOF){
		
		
		
			ans=0;
			for(i=3; i<=n; i++){
				plus=0;
				for(j=2; j<i; j++){
					if(i%j==0){
						plus++;
						break;
					}
				}
				if(plus==0)	ans++;
			}
	if(n==1)	printf("0\n");
	if(n==2)	printf("1\n");
	if(n>=3)	printf("%d\n",ans+1);
		
	}
	return 0;
}
