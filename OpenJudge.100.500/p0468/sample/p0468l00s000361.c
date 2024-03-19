#include<stdio.h>
int main(void)
{
   char str[6];
   scanf("%s",str);
    char arc[] = "ARC";
   char abc[] = "ABC";
   if(strcmp(str,abc)==0){
    printf("%s",arc);
  }else{
    printf("%s",abc);
  }
    return 0;
}
