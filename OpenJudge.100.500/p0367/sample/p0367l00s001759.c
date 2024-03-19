#include <stdio.h>
 
int main(void) {
	int a,b,c,i,x,z;
	z=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b){
		i=1;
	}else if(b==c){
		i=b-a+1;
	}else{
	i=b-a;
	}
	for(x=0;x<i;x++){
		if(c%(a+x)==0){
			z++;
		}
	}
	printf("%d\n",z);
	return 0;
}

