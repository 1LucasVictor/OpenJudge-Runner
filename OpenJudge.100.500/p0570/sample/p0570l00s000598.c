#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void) {
int A,B;
scanf("%d %d",&A,&B);
int max =0;
if (A>B) max=A;
else max =B;
for (int i=0;i<max;i++){
    if (abs(A-i)==abs(B-i)){printf("%d",i);
                             break;          }
 else if ((abs(A-i)!=abs(B-i)) && i==max-1) {printf("IMPOSSIBLE");}

}
return EXIT_SUCCESS;
}
