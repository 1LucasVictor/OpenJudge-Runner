#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	char a[21],b[21];
	int i,j;
	
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
		i++;
	i--;
	for(j=0;i>=0;j++,i--)
		b[j]=a[i];
	b[j]='\0';
	printf("%s\n",b);
	//for(i=0;i<=1000000000;i++);
	return 0;
}