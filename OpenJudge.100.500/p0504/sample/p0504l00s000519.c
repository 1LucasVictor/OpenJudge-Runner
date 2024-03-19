#include <stdio.h>
int main(){
int hp,atk;
scanf ("%d %d",&hp,&atk);
int hit=hp/atk;
hp%atk!=0? ++hit:hit;
printf("%d",hit);
return 0;
}
	