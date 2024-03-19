#include<stdio.h>

int main(void){
  int n,n_ichinokurai;
  char buf[10];
  char yomikata[3][4] = {("hon"),("bon"),("pon")};
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d\n", &n);
  n_ichinokurai = n % 10;
    
  if(n_ichinokurai==3){
    printf("%s\n",yomikata[1]);
  }
  else if(n_ichinokurai==0 || n_ichinokurai==1 ||n_ichinokurai==6 ||n_ichinokurai==8){
    printf("%s\n",yomikata[2]);
  }
  else if(n_ichinokurai==2 || n_ichinokurai==4 ||n_ichinokurai==5 ||n_ichinokurai==7||n_ichinokurai==9){
    printf("%s\n",yomikata[0]);
  }
}
    