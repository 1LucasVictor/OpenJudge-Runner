#include <stdio.h>
int main() {
 int ans;
int get_int;
scanf("%d",&get_int);
ans = get_int + pow(get_int, 2) + pow(get_int, 3);
printf("%d" , ans); 
return 0;
}