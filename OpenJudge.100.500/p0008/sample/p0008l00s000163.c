#include <stdio.h>
int main( void ){
	int a[10000] = {0},s=0,i,j;
	for(i=2;i<10000;i++){
		if(!a[i])for(j=i*i;j<10000;j+=i)a[j]=1;
		a[i]=s+=!a[i];
	}
	for(;~scanf("%d",&i);printf("%d\n",a[i]));
	return 0;
}