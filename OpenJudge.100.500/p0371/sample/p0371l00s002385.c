#include<stdio.h>
int main(void)
{
	int i[100000],n,m=0,x,y,sum=0,min,max,tmp;
	scanf("%d\n",&n);
	for(m=0;m<n;m++){
		scanf("%d\n",&i[m]);
	}
	for(m=0;m<n;m++)
		sum+=i[m];
	for(x=0;x<n;x++){
		for(m=0;m<n;m++){
			if(i[m]<i[m+1]){
			tmp=i[m];
			i[m]=i[m+1];
			i[m+1]=tmp;
			}
		}
	}
	max=i[0];
	for(x=0;x<n;x++)
	min=i[x];	
	printf("%d %d %d\n",min,max,sum);
}