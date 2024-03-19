#include<stdio.h>
int main(void){
int h,w,i,n;
while(1){
scanf("%d %d",&h,&w);
if(h==0&&w==0){break;}else
{
for(i=0;i<h;i++){
for(n=0;n<w;n++){
if(i==0||i==h-1||n==0||n==w-1){printf("#");}
else{printf(".");}
}
printf("\n");
}
}
printf("\n");
}
return 0;
}