#include <stdio.h>
int main(void){
  char buf[100];   
  fgets(buf, sizeof(buf), stdin);
    int n;
    sscanf(buf, "%d", &n);
  
    int amari = n%10;
  
  if(amari == 2||amari==4||amari==5||amari==7 ||amari==9){
    printf("hon\n");
  }else if(amari == 0|| amari==1||amari==6||amari==8){
    printf("pon\n");
  }else if (amari == 3){
    printf("bon\n");
  }
}