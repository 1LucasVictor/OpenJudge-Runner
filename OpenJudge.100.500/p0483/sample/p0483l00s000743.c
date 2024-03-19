#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    if(n<1000){
        while(n>0){

    r=n%10;
    if(r==7){
      c++;
      break;
    }
    n=n/10;
    }
    if(c>0)
        printf("Yes\n");
    else
        printf("No\n");

    }

}
