#include<stdio.h>
main(){
	int n,i=0,l,o;

	while(scanf("%d", &n) != EOF){	
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
				
	printf("%d\n",i);
	i=0;
	
}
	return 0;

}