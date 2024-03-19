#include <stdio.h>
int main()
{
int h, w, i, j;
while(1){
scanf("%d", &h);
scanf("%d", &w);
if (h==0&&w==0) {
break;
} else {
for (j=0;j<h;j++){
for (i=0;i<w;i++){
if ((j!=0&&j!=h-1)&&(i!=0&&i!=w-1)) {
printf(".");
} else {
printf("#");
}
}
printf("\n");
}
printf("\n");
}
}
return 0;
}