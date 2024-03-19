#include <stdio.h>
int main(){
int i, j, H, W;
for (;;){
scanf("%d %d", &H, &W);
if (H == 0 && W == 0 ) break;
for ( i = 1; i < H+1; i++ ){
for ( j = 1; j < W+1; j++)
if ( j == 1 || j == W || i == 1 || i == H )
printf("#");
else
printf(".");
printf("\n");
}
printf("\n");
}
return 0;
}

