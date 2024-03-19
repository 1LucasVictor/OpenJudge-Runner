    #include<stdio.h>
    void main()
    {
    char s[4],p=0;
      scanf("%s",s);
      for(int i=1;i<4;i++)
      {
      if(s[i+1]-s[i] == 0) {p=2; break;}
      
      }
      (p==2)?(printf("Bad")):(printf("Good"));
    }