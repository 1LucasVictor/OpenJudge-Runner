#include<stdio.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);
     a=N%10;
     b=(N-a)%10;
     c=N-b;
     if(a==7||b==7||c==7)
     printf("Yes");
     else
       printf("No");
    return 0;
}

