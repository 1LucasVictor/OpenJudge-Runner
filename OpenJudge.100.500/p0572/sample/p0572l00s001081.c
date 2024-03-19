#include <stdio.h>
int main(int argc, char *argv[])
{
	long i,j,l,r,a,b,m,n,s=2018,f,g;
	scanf("%ld %ld",&l,&r);
	for(i=l;i<r;i++){
		for(j=i+1;j<=r;j++){
			if(i*j<2019){
				printf("%ld",l*r);
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
	if(l*r>2019)printf("%ld",s);	
	return 0;
}