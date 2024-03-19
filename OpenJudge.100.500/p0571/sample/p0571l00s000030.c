#include <stdio.h>

int main(void) {
  int N,A,B;
  scanf ("%d %d %d", &N,&A,&B);
if( 1<=N && N<=20,
    1<=A && A<=50,
    1<=B && B<=50){}else{
      printf("error");}
int NA =N*A;
   if ( NA < B) {
            printf("%d ", NA);
            }else if(NA>B) {
            printf("%d ", B);
        }else{
          printf("%d ", NA);
        }
    

}
