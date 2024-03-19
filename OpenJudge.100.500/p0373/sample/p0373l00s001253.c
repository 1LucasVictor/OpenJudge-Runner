#include "stdio.h"
int main(void){
int H,W;
int i,j;
do{
scanf("%d %d",&H,&W);	
if(H!=0 || W!=0){
for(i=0;i<H;i++){
for(j=0;j<W;j++){
if(i==0 || j==0 || i==H-1 || j==W-1){
printf("#");
}else{
printf(".");
}
}
puts("");
}
puts("");
}
}while(H!=0 || W!=0);
return 0;
}