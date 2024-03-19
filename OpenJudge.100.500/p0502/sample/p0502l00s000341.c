#include<stdio.h>
int main()
{
	int n,a[100],c=0,x=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			c++;
			if(a[i]%3==0||a[i]%5==0) x++;
		}
	}
	if(c==x) printf("APPROVED\n");
	else printf("DENIED\n");
	return 0;
}
