#include<stdio.h>

int main(void){


char number[1001]={0};
int i,sum=0;



while(1){
      sum=0;
      scanf("%s",&number);
      if(number[0]== '0' ) break;


      for(i=0;number[i]!= '\0';i++){
              sum=sum+(number[i]-'0');
      }
      printf("%d\n",sum);

}
return 0;

}