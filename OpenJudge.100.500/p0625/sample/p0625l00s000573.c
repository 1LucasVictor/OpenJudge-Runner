#include <stdio.h>
#define MAX 8
int main(){
int a,b;
scanf("%d %d",&a,&b);

if(a > MAX || b > MAX){
 printf(":)\n");
}
else{
printf("Yay!\n");
}

return 0;
}

