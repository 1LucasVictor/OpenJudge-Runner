#include<stdio.h>
int main(void)
{
	int a[1200]={0},i,j;
	char c,C;
	for(i=0;;i++){
		scanf("%c",&c);
		if(c==32||c==44||c==46){
			a[i]=c;
		}else if(c>=65&&c<=90){
			a[i]=c+32;
		}else if(c>=97&&c<=122){
			a[i]=c-32;
		}
		if(c==10){
			break;
		}
	}
	for(j=0;j<i;j++){
		printf("%c",a[j]);
	}
	printf("\n");
	return 0;
}