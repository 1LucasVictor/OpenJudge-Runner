#include <stdio.h>
int yoko,tate;
int x,y;

main(){
while(1){
	
  scanf("%d%d",&tate,&yoko);
  for(x=1;tate>=x;x++){
   for(y=1;yoko>=y;y++){
   if((y>1&&y<yoko)&&(x>1&&x<tate)){printf(".");}
   else{printf("#");}
   if(yoko==y){printf("\n");}
   if(yoko==y&&tate==x){printf("\n");}
   }
  }
  if(yoko==0&&tate==0){
  return 0;}
}  
}  
  