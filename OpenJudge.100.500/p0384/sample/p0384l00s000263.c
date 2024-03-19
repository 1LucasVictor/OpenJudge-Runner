#include<stdio.h>
int main(void)
{
	char a[1200];
	int b;
	for(b=0;a[b-1]!='\n';b++){
		scanf("%c",&a[b]);
		if(65<=a[b] && 90>=a[b]){
			a[b]+=32;
		}else{
			if(97<=b[a] && 122>=a[b]){
				a[b]-=32;
			}
		}
	}
	a[b-1]=0;
	printf("%s\n",a);
	return 0;
}