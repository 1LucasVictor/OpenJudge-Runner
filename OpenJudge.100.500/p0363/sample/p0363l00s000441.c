#include <stdio.h>

int main(void)
{
int a[3],i,M,N,L;
scanf("%d %d %d",&a[0],&a[1],&a[2]);
M=a[0]; N=a[0]; L=a[0];
for(i=0;i<3;i++){
	if(M>a[i]){
		M=a[i];
	}
	if(L<a[i]){
		L=a[i];
	}
}
N=a[0]+a[1]+a[2]-M-L;
printf("%d %d %d\n",M,N,L);
return 0;
}