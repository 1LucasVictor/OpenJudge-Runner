#include<stdio.h>
int main(){
	int a,b,c,d,n,i=0;

	while(1){


	scanf("%d",&n);
	if(getchar()==EOF)break;
	for(a=1;a<10;a++){
		for(b=1;b<10;b++){
			for(c=1;c<10;c++){
				for(d=1;d<10;d++){
					if(n==a+b+c+d)i++;
				}
			}
		}
	}

			
	printf("%d\n",i);
}
	return 0;

}