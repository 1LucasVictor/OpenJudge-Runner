#include <stdio.h>
int main(){
	int a[100];
	int b[100];
	int i,j;
	char s[200];
	int keta,wa;
	i=0;
	while((scanf("%d %d",&a[i],&b[i]))!=EOF){
//		printf("debug %s is read -scanf = %d\n",s,j);
		i++;
		
	}
//printf("debug %d %d is read last %d\n",a[i-1],b[i-1],i-1);
	for(j=0;j<i;j++){
		keta=1;
		wa=a[j]+b[j];
		for(;wa/=10;keta++);
		printf("%d\n",keta);
	}
}