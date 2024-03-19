#include <stdio.h>
int main(void)
{
  int set;
  int i;
  int a;
  int b;
  int c;
  scanf("%d", &set);
  for (i = 0; i < set; i++){
      scanf("%d%d%d", &a, &b, &c);
     if ((a * a == b * b + c * c)||(b * b == a * a + c * c)||(c * c == b * b + a * a)){
	   printf("YES\n");
         }
	 else{
	   printf("NO\n");
		 }
  }
  return (0);
}