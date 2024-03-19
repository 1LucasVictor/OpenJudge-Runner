#include <stdio.h>

int main () {
	int a,b,c,k;
  int z=0;
scanf("%d %d %d %d",&a,&b,&c,&k);
	while(a>0){
    a--;
    k--;
    z++;
    if(k==0){
    printf("%d", z);
    return 0;
    }
    }
   while(b>0){
    b--;
    k--;
    if(k==0){
    printf("%d", z);
    return 0;
    }
   }
    while(c>0){
    c--;
    k--;
    z--;
    if(k==0){
    printf("%d", z);
    return 0;
    }
    }
}