#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  char ch[1200];
  int i = 0;
  int n = 0;

  for (n = 0; n < 1200; n++) {
    ch[n]=0;
  }


  while(1){

    scanf("%c",&ch[i]);

    if(ch[i] == '\n') break;

    // ?°???????????????°,??§?????????

    if(islower(ch[i])){
      ch[i]=toupper(ch[i]);
      printf("%c",ch[i]);
    }
    //??§?????????????°??????????
    else if(isupper(ch[i])){
      ch[i]=tolower(ch[i]);
      printf("%c",ch[i]);
    }
    // ?????£?????§?????????????????????????????????
    else {
      printf("%c", ch[i]);
    }
i=i+1;
  }

 printf("\n");

return(0);
}