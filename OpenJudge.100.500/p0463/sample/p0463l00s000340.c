#include<stdio.h>

int main() {
int n;
scanf("%d",&n);
int rem = n%10;
if( rem == 2 || rem == 4 || rem == 5 || rem == 7 || rem == 9)
printf("hon");
else if ( rem == 0 || rem == 1 || rem == 6 || rem == 8 )
printf("pon");
else
printf("bon");
return 0;
}