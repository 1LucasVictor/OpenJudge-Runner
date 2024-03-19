#include <stdio.h>

int height[300];
int width[300];
int i=0;
int a,b;
//int w,h,x,y,r;

int main(void) {
  while(scanf("%d %d",&a,&b) && a!=0 || b!=0){
  height[i]=a;
  width[i]=b;
  i++;
}

for(int k=0;k<i;k++){
for(int l=0;l<height[k];l++){
for(int m=0;m<width[k];m++){
  if(l>0&&m>0&&l<height[k]-1&&m<width[k]-1)printf(".");
  else printf("#");
}
printf("\n");
}
 if(k<i-1)printf("\n");
 else break;
}
 //printf("\n");
	//return 0;


return 0;
}

