#include<stdio.h>
#include <string.h>
#include<math.h>

int main(){
	int a[1000000]={0};
	int n,i,j,count;
	while(scanf("%d",&n)!=EOF){
		//printf("n=%d\n",n);
		count=0;
		/*for(i=2;i<=n;i++){
			a[i]=0;
		}*/
		for(i=2;i<=n;i++){
			if(a[i]==0){
				count++;
				for(j=2*i;j<=n;j=j+i){
					a[j]=1;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}