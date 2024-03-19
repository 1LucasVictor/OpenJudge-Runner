#include<stdio.h>
 char sa[1001];
int main(void){
    int a=0,b=0,i;
    while(1){
      for(i=0;i<1001;i++){
        scanf("%c",&sa[i]);
          if(sa[0]=='0'||sa[i]=='\n')break;
        a=sa[i]-'0';
        b=b+a;
      }
      if(sa[0]=='0')break;
      printf("%d\n",b);
      b=0;
    }
return 0;
}