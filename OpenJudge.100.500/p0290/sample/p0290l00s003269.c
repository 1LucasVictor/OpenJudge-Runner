#include <stdio.h>

int main()
{
	int n;
	int i,j,count=0;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=2;j<a[i]/2+1;j++){
			if(a[i]%j==0){
				count++;
				break;
			}
		}
	}
	
	printf("%d\n",n-count);
	
	return 0;
	
}