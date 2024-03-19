#include<stdio.h>
int main()
{
    int a[200000],i,n,j;
	i=0;
	
	scanf("%d", &n);
	for(i=0; i<n;i++){
		
		scanf("%d", &a[i]);
	}
	
	
	do{
		j=0;
		for(i=1; i<n; i++){
			if(a[i-1]>a[i]){
				a[i-1]=a[i-1]+a[i];
				a[i]=a[i-1]-a[i];
				a[i-1]=a[i-1]-a[i];
				j++;
			}
		}
	}while(j!=0);

	for(i=1; i<n; i++){
		if(a[n-1]=a[n]){
			printf("NO\n");
			
			return 0;
		}
		
		
	}
	printf("YES\n");
	return 0;
}