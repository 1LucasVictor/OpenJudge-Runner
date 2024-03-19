#include <stdio.h>
int main()
{
	int i,j,t;
	char a[4];
	scanf("%s",a);
	for(i=1;i<4;i++){
		int f=0;
		for(j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				f=1;
			}
		}
		if(f==0) break;
	}
	if(a[0]==a[1] && a[2]==a[3])
		printf("Yes\n");
	else
		printf("No\n");
} 
