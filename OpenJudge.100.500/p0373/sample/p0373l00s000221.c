#include<stdio.h>
int main(){
int H=1,W=1,i=1,s=1,w=1;
 while(w == 1){
    scanf("%d%d",&H,&W);
    if(H == 0 && W == 0)break;
    for(i=0;i<W-1;i++)printf("#");
    printf("#\n");
    for(s=0;s<H-2;s++){ printf("#");
      for(i=0;i<W-2;i++)printf(".");
      printf("#\n");}
    for(i=0;i<W-1;i++)printf("#");
    printf("#\n");
printf("\n");}

  
  
  return 0;

}