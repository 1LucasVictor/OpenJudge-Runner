#include <stdio.h>
int main(void){
	int a,b[101],c,i,j,z,min,cnt=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	for(j=0;j<a-1;j++){
		min = b[j];	
		for(i=j;i<a;i++){	
			if(b[i] <= min){
				min = b[i];
				z = i;
			}
		}
		if(j != z)
			cnt++;
		c = b[j];
		b[j] = b[z];
		b[z] = c;
	}
	for(i=0;i<a;i++){
		printf("%d",b[i]);
		if(i!=a-1)
			printf(" ");
		else
			printf("\n");
	}
	printf("%d\n",cnt);
	return 0;
}