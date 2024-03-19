#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int h,n,sum=0,scan;
scanf("%d %d",&h,&n);
for(int count=0;count<n;count++){
scanf("%d",&scan);
sum=sum+scan;
}
if(h<=sum){printf("Yes");}
else{printf("No");}
}