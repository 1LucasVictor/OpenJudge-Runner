#include <stdio.h> 
int main(void)
{
	int a[11],b[11];
	int i;
	a[0]=-1;
	for(i=1;i>0;){
		scanf("%d",&a[i]);
		if(a[i]!=0){
			i++;
		}else if(a[i]==0){
			printf("%d\n",a[i-1]);
			i--;
			if(a[i-1]==-1) break;
		}
	}
return 0;
}