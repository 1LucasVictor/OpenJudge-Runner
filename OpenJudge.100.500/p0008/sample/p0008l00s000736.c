#include<stdio.h>
int main(){
	long n,i=0,l,o;

	while(1){


	scanf("%ld",&n);
	if (getchar() == EOF)break;
	
	for(l=2;l<=n;l++){
		for(o=2;o<l;o++){
			if(l%o==0){
				break;
			}
		}
		if(l==o){
			i++;
		}
	}
				
	printf("%ld\n",i);
	i=0;
	
}
	return 0;

}