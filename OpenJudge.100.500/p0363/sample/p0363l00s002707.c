#include<stdio.h>
int main(void)
{
	int data[3],i,j,temp;
	scanf("%d %d %d",&data[0],&data[1],&data[2]);
	for(i=0;i<2;i++) {
		for(j=1;j<3;j++) {
			if(data[i]>data[j]) {
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	printf("%d %d %d\n",data[0],data[1],data[2]);
	return 0;
}