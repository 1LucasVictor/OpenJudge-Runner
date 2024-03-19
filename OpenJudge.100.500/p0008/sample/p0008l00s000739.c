#include <stdio.h>
int main(){
	int i,j,n,count=2,a[1000000];
    while(scanf("%d",&n)!=EOF){
		if (n<=1) {
			count=0;
		}else if (n==2) {
			count=1;
		}else{
			a[0]=2;
			a[1]=3;
			for(i=5;i<=n;i+=2) {
				j=0;
				while(a[j]*a[j]<=i){
					if(i%a[j]==0){ 
						break;
					}
					j++;
				}
				if (a[j]*a[j]>i) {
					a[count]=i;
					count++;
				}
			}
		}
		printf("%d\n",count);
		count=2;
	}
	return 0;
}