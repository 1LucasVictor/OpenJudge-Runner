#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{int i;
char str[4];
scanf("%s",str);
for(i=0;i<3;i++)
{
  if(str[i]==str[i+1])
  {
      printf("Bad");
      return 0;
  }
}
printf("Good");
return 0;
}  
    
    
    
    
    
    
    
