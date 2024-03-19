#include<stdio.h>
int main()
{
	int n,m,k,a[200011]={},b[200011]={},c=0,i,j=0;
	long t=0;

	scanf("%d%d%d",&n,&m,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);

	i=0;
	while(1){
		if(a[i]<=b[j]&&t+a[i]<k){
			t+=a[i];
			i++;
			c++;
			if(a[i]=='\0')
				a[i]=9999999999;
		}
		else if(a[i]>b[j]&&t+b[j]<k){
			t+=b[j];
			j++;
			c++;
			if(b[j]=='\0')
				b[j]=9999999999;
		}
		else
			break;
	}
	printf("%d",c);
	return 0;
}