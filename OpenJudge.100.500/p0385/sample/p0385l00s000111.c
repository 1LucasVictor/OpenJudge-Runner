#include <stdio.h>
#include<string.h>
int main(void)
{
	char h[100],w[100];
	int i,j;
	int x=0;
	int z=0;
	int a[1000];
	int n;

	do{
		
		scanf("%s",h);
		if(strcmp(h,"0")==0){
			break;
			
		}
			
for(i=0;i<strlen(h);i++){
	
	z+=(int)h[i]-'0';
	
	

	
	
}
	a[x]=z;
z=0;
		x++;
		}while(1);
	
for(i=0;i<x;i++){
	
	printf("%d\n",a[i]);
	
	
	
	
}
	return 0;
}