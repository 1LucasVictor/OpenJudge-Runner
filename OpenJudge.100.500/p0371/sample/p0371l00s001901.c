#include<stdio.h>
int main(void){
	int n,a[10000],m,M,s=0,i=0;
	
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	i=0;	
	m=a[0];
	M=a[0];
	while(i<n){
		if(m>a[i]) m=a[i];
		if(m<a[i]) M=a[i];
		s=s+a[i];
		i++;
	}
	printf("%d %d %d\n",m,M,s);
	return 0;
}