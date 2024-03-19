#include <stdio.h>
int main(){
int hp,atk;
scanf ("%d %d",&hp,&atk);
printf("%d",(hp+atk-1)/atk);
return 0;
}