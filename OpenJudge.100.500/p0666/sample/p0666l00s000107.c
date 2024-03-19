#include <stdio.h>
     
int main(void) {

int x,a,b;
   char buf[128];
   fgets(buf, 128, stdin);
   sscanf(buf, "%d %d %d", &x, &a, &b);

   if(a-b > 0){
      printf("delicious");
   }else if(b-a < x+1){
      printf("safe");
   }else if(b-a >= x+1){
      printf("dengerous");
   }

}
   