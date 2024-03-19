#include <stdio.h>
 
int main()
{
int n, car[10], i;
     
i = 0;
     
while (scanf("%d", &n) != EOF){
if (n != 0){
car[i++] = n;
}
else {
printf("%d\n", car[--i]);
}
}
return 0;
}