#include <stdio.h>

int main() {
  int A, B;
  scanf("%d %d", &A, &B);
  int ADD = A+B;
  int SUB = A-B;
  int MLT = A*B;
  
  if (MLT >= ADD) {
    if (ADD >= SUB)
    	printf("%d", MLT);
  	else if (MLT >= SUB)
        printf("%d", SUB);
  } else if (ADD >= SUB) {
    if (SUB >= MLT)
    	printf("%d", MLT);
  	else if (ADD >= MLT)
        printf("%d", ADD);
  } else if (SUB >= MLT) {
    if (MLT >= ADD)
    	printf("%d", MLT);
  	else if (SUB >= ADD)
        printf("%d", MLT);
  }
  
  return 0;
}
