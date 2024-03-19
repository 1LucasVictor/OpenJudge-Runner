#include <stdio.h> 
int main(void)
{
	int a[11],b[11];
	int i;
		while(~scanf("%d",&a[i])){
		if(a[i]!=0){
			i++;
		}else if(a[i]==0){
			printf("%d\n",a[i-1]);
			i--;
	}
}
return 0;
}