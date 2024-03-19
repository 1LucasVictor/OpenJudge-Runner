#include <stdio.h>
int main(){
  int H,W,a,b,c,d,e;
  for(;;){ 
    scanf("%d%d",&H,&W);
      
    
    if(H==0&&W==0) break;
 
    for(a=0;W-1>=a;a++){
      printf("#");
     
    
      for(c=3;H>=c;c++){    
	if(a==W-1) printf("\n#");
	if(a==W-1) for(d=0;W-3>=d;d++){ printf(".");}
	if(a==W-1) printf("#");
      }

    }
  
      
    printf("\n");
    for(e=0;W-1>=e;e++){ printf("#");}
    printf("\n\n");
 
 }

  return 0;
}