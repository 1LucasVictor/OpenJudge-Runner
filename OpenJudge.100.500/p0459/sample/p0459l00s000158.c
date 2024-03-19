#include <stdio.h>

int main(void)
{
	int h, f;
	scanf("%d%d", &h, &f);
	int ashi = h*2;
    int flag=0;
    for(int kame = 0; ashi <= f && kame <= h; kame++)
    {
      ashi = (h-kame) * 2 + kame * 4;
      if(ashi==f)
        flag =1;
    }
    
   if(flag==1)
     printf("Yes\n");
   else
     printf("No\n");
	return 0;
}