#include<stdio.h>
int main(){
	int m[120];
	int n,j,i;
	
	m[0]=100000;
	for(i=1;i<100;i++){
		m[i]=m[i-1]*0.05+m[i-1];
		if(m[i]%1000!=0){
			j=m[i]%1000;
			m[i]-=j;
			m[i]+=1000;
		}
	}
	scanf("%d",&n);
	printf("%d\n",m[n]);
	return 0;
}