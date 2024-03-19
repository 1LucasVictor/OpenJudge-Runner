#include <stdio.h>
 
int main(void){
int s;
scanf("%d\n",&s);
printf("%d:%d:%d\n", s/3600, (s%3600)/60,s%60);
return 0;
}