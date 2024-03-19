#include <stdio.h>

int main(void){

int no = 0;

scanf("%d", &no);
printf("%d:%d:%d\n", no/3600, no/60%60, no%60);
return 0;
}
