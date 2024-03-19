#include<stdio.h>
    void main()
    {
    char s[4],p=0;
      scanf("%s",s);
      for(int i=0;i<=3;i++)
      {
      if(s[i+1]-s[i] == 0) {p=2;}
      
      }
      (p==2)?(printf("Bad")):(printf("Good"));
    }