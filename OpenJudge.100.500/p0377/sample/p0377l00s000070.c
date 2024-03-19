#include<stdio.h>
int main(){
  int n,i,S[14],H[14],C[14],D[14],number;
  char chara,dummy;

  for(i=1;i<14;i++){
    S[i] = 0;
    D[i] = 0;
    H[i] = 0;
    C[i] = 0;
  }

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%c",&dummy);
    scanf("%c %d",&chara,&number);
    switch(chara){
    case 'S':
      S[number] = number;
      break;
    case 'H':
      H[number] = number;
      break;
    case 'C':
      C[number] = number;
      break;
    case 'D':
      D[number] = number;
      break;
    default: break;
    }
  }
   for(i=1;i<14;i++){
    if(S[i] == 0){
      printf("S %d\n",i);
    }
  }
  for(i=1;i<14;i++){
    if(H[i] == 0) printf("H %d\n",i);
  }
  for(i=1;i<14;i++){
    if(C[i] == 0) printf("C %d\n",i);
  }
  for(i=1;i<14;i++){
    if(D[i] == 0) printf("D %d\n",i);
  }
  return 0;
}



