#include <stdio.h>
int W,H,x,y,r;

main(){
 scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);

 if(x+r>W||x-r<0){
 printf("No\n");
 }
 else if(y+r>H||y-r<0){
 printf("No\n");
 }
 
 
 
 
 
 else{printf("Yes\n");}


return 0;
}