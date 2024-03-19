#include<stdio.h>
int main(void){
  int  s[5];
  int i;
  scanf("%d",s);
  s[1] = (int)s[0]/1000;
  s[2] = (int)s[0]/100-s[1]*10;
  s[3] = (int)s[0]/10-s[2]*10-s[1]*100;
  s[4] = (int)s[0]-s[3]*10-s[2]*100-s[1]*1000;
  for( i=0; i<4;i++){
    if(s[i] == s[i+1]){break;
    }
  }
  if(i==4)printf("good");
  else printf("Bad");
  return 0;
}