#include<stdio.h>
int main()
{
   char N[4];
   scanf("%s",N);
   if(N[0] == '7' || N[1] == '7' || N[2]== '7' || N[3] == '7' || N[4] == '7'){
     puts("Yes\n");
   }
   else{
     puts("No\n");
   }
   return 0;
}
