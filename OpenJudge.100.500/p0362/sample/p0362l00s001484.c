#include<stdio.h>

int main(void)
{
   int a, b, c;
   
   scanf("%d %d %d", &a, &b, &c);

   if(a < b < c) printf("Yes\n");
   else if(a < c < b) printf("No\n");
   else if(b < a < c) printf("No\n");
   else if(b < c < a) printf("No\n");
   else if(c < a < b) printf("No\n");
   else if(c < b < a) printf("No\n");
　 else printf("Np\n");

    return 0;
}