#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d %d", &a, &b);
    if(b%a!=0){
      t=(b/a)+1;
    printf("%d\n",t);
        }
     else{
      printf("%d\n",b/a);
        }
    return 0;
}