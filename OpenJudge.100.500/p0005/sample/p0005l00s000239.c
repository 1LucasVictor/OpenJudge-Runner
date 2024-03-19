#include <stdio.h>

void reverse()
{
     char ch = getchar();
     
     if(ch == '\n') return;
     
     reverse();
     printf("%c", ch);
     
     return;
}

int main(void)
{
     reverse();
     printf("\n");
     
     return 0;
}