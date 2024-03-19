#include <stdio.h>

int main(void){

int no1, no2, no3;

scanf("%d %d %d", &no1, &no2, &no3);

if((no1 < no2) && (no2 < no3)){
printf("Yes\n");
}
else {
printf("No\n");
}

return 0;
}
