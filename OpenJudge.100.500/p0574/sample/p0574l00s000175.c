    #include <stdio.h>
     
    int main(void)
    {
      char s[4+1];
      int i;
      
      scanf("%s", s);
      
      for (i = 1; i< 4;i++)
      {
        if (s[i] == s[i-1])
        {
          printf("Bad");
          break;
        }
      }
      if (i == 4) printf("Good");
      return 0;
    }