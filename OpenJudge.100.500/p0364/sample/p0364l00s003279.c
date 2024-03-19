#include <stdio.h> 
int main (void) {
int W,H,x,y,r ;
scanf("%d %d",&W,&H) ;  
 scanf("%d %d",&x,&y) ;  
 scanf("%d",&r) ;
if(W<x+r || H<y+r ||y-r<0||x-r<0 ){
printf("No\n");
}
else{ printf("Yes\n") ;
}
return 0; }