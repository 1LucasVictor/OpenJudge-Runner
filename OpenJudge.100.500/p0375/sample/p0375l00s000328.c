#include <stdio.h>

int x,y;

main(){
	scanf("%d",&x);
	for(y=1;y<=x;){
		if((y%3==0)||(y%10==3)||(y%100/10==3)||(y%1000%100/10==3)){printf(" %d",y);}
		else if((y/10==3)||(y/100==3)||(y/1000==3)){printf(" %d",y);}
		if(x==y){printf("\n");}
	 y++;
	}

  return 0;
}
  