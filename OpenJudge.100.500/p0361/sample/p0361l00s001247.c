#include<stdio.h>
  
#define MIN 0
#define MAX 86399
  
int main(void)
{
    int S, h, m, s;
  
    scanf("%d", &S);
  
    if(S < MIN || S > MAX)
    {
        return -1;
    }
  
    s = S % 60;
    m = S / 60 % 60;
    h = S / 60 / 60;
  
    printf("%d:%d:%d\n", h, m, s);
  
    return 0;
  
}
