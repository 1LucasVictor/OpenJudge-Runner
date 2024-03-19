#include<stdio.h>

int main()
{
    char S1[10],S2[]="ABC";
    int T;
    scanf("%s",S1);
    T=strcmp(S1,S2);
    if(T == 0)
    {
      printf("ARC\n");
    }
    else
    {
      printf("ABC\n");
    }
    return 0;
}