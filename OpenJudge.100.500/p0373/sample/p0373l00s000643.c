#include<stdio.h>
main(){
int w,h,i,j,z;
for(;scanf("%d%d",&h,&w);){
if (h == 0 && w==0) break;
for(i=0;i<h;i++){
if (i==0|| i==(h-1))
for(j=0;j<w;j++)
printf("#");
else{
printf("#");
for(j=1;j<(w-1);j++)
printf(".");
printf("#");}
printf("\n");}
printf("\n");}
return 0; 
}