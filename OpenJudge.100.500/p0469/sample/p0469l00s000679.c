#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
int k,a,b;
int bb=0;
scanf("%d",&k);
scanf("%d %d",&a,&b);

for(int i=0;;i++){
    if(a<=bb&&bb<=b){printf("OK\n");return 0;}
    else if(b<bb){printf("NG\n");return 0;}
bb=bb+k;
}
}