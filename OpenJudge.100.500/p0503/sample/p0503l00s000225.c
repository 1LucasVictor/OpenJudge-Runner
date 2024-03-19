#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (void) {
int n;
scanf("%d",&n);
int array[n];
for (int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
int i=0;
while (i<n){

for (int j=i+1;j<n;j++){
   if (array[i]==array[j]) {printf("NO");
                             return 0;}
  }
i++;
}

printf("YES");

return EXIT_SUCCESS;
}
