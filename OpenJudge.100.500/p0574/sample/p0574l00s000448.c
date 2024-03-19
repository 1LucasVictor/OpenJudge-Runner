#include <stdio.h>
int main()
{
    int n;
    
    scanf("%d",&n);
    int t1,t2,t3,t4;
    
    t1=n%10 , n=n/10;
    t2=n%10 , n=n/10;
    t3=n%10 , n=n/10;
    t4=n%10 , n=n/10;
    
    if((t1==t2)||(t2==t3)||(t3==t4))
    printf("Bad\n");
    else
    printf("Good\n");
    
    

    return 0;
}