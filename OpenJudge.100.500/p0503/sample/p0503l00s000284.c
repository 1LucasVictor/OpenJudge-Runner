#include<stdio.h>
int main()
{
    int a[200000], j,k,i,n;
	i=0;
	
	scanf("%d", &n);
	
	for(i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	k=1, i=0;
	for(j=0; j<n; j++){
		
		for(i=k; i<n;i++){
			if(a[i]==a[j]){
				printf("NO\n");
				return 0;
			}
			
			if(a[i]==a[n-i]){
	printf("NO\n");
	return 0;
			}
		}
		k++;
			
		
	}
	printf("YES");
		    return 0;
}