#include<stdio.h>
int main()
{
    int a[200000], j,k,i,n;
	i=0;
	
	scanf("%d", &n);
	scanf("%d", &a[0]);
	k=1;
	for(i=1; i<n;i++){
		
		scanf("%d", &a[i]);
	for(j=0; j<k; j++){
		
			if(a[k]==a[j]){
				printf("NO\n");
				return 0;
			}

		}
				k++;
	}
	printf("YES");
		    return 0;
}