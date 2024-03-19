#include<stdio.h>
long long n,m,k,a[200001],b[200001],i,j,l=0,p=0;
int main(void)
{
	for(i=0;i<200001;i++){
		a[i]=1000000;
		b[i]=1000000;
	}
	scanf("%lld%lld%lld",&n,&m,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	while(1){
		if(l>k){
			p--;
			break;
		}
		if(i==n-1&&j==m-1){
			break;
		}
		if(a[i]>b[j]){
			l+=b[j];
			p++;
			j++;
		}
		else if(a[i]<=b[j]){
			l+=a[i];
			p++;
			i++;
		}
	}
	printf("%d\n",p);
	return 0;
}