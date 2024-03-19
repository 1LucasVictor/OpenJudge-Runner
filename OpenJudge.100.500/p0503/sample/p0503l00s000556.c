#include<stdio.h>
int main(void)
{
	int n,a[200001],i,j,m,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	return 0;
}