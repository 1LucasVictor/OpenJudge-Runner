#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,l,r,a,b,m,n,s=2018,f,g;
	scanf("%d %d",&l,&r);
	for(i=l;i<r;i++){
		for(j=i+1;j<r;j++){
			if(i*j<2019){
				printf("%d",l*r);
				break;
			}
			else{
				f=i*j/2019;
				g=i*j-2019*f;
				if(g<s){
					m=i;
					n=j;
					s=g;
				}
			}
		}
	}
	printf("%d",s);	
	return 0;
}