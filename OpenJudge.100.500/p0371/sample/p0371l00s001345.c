#include <stdio.h>

int main()
{
 int i, count, tmp;
 scanf("%d", &count);
 int a[count];
 for(i = 0; i < count; i++) {
  scanf("%d", &a[i]);
 }
 tmp = a[0];
 for(i = 0; i < count; i++) {
  if(tmp > a[i]) tmp = a[i];
 }
 printf("%d ", tmp);
 tmp = a[0];
 for(i = 0; i < count; i++) {
  if(tmp < a[i]) tmp = a[i];
 }
 printf("%d ", tmp);
 tmp = 0;
 for(i = 0; i < count; i++) {
  tmp += a[i];
 }
 printf("%d", tmp);
 printf("\n");
 return 0;
}