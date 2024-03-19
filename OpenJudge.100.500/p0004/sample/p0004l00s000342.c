#include<stdio.h>

int main(void){

	long int x,y;
	long int i,j;
	long int greatest,least;
	long int twomulti;


	while( scanf("%ld %ld",&x ,&y) != EOF ){
		if( (x<=0)||(x>=2000000000)||(y<=0)||(y>=2000000000) ){
			break;
		}
		twomulti = x*y;
		for(i=0; x!=y; i++){
			if(x<y){
				j=x;
				x=y;
				y=j;
			}
			x = x-y;
			greatest = x;
		}
		
		least = twomulti/greatest;
		printf("%ld %ld\n",greatest ,least);
	}

	return 0;
}