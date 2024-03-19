#include <stdio.h>
#include <string.h>
int main() {
    int i,n,m[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&m[i]);
    for(i=n-1;i>=0;i--){
    	if(i!=n-1)printf(" ");
    	printf("%d",m[i]);
	}
    printf("\n");	
	return 0;
}
