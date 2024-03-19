#include <stdio.h>


int main (void)
{
  int n, i, S[13], H[13], C[13], D[13], num;
  char suit;

  for(i =0; i<13; i++){
    S[i] = 0;
    H[i] = 0;
    C[i] = 0;
    D[i] = 0;
  }
  scanf("%d", &n);
  for( i =1; i<= n; i++)
  {
      scanf("%s %d", &suit, &num);
      if(suit == 'S'){
        S[num -1] = 1;
      }
      if(suit == 'H'){
        H[num -1] = 1;
      }
    if(suit == 'C'){
        C[num -1] = 1;
      }
    if(suit == 'D')
      {
        D[num -1] = 1;
      }

  }


  for(i =0; i<13; i++){
    if(S[i] == 0){
    printf("S %d\n", i +1);
    }
  }

  for(i =0; i<13; i++){
    if(H[i] == 0){
    printf("H %d\n", i +1);
    }
  }

  for(i =0; i<13; i++){
    if(C[i] == 0){
    printf("C %d\n", i +1);
    }
  }

  for(i =0; i<13; i++){
    if(D[i] == 0){
    printf("D %d\n", i +1);
    }
  }

  return 0;
}