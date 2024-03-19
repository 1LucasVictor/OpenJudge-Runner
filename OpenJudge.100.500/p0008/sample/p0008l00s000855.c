#include <stdio.h>
int prime(int num)
{
    int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0){
            return 0;  //0...false
        }
    }
    return 1;   //1...true
}

int main(void)
{
    int n,c,i;
    
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(i=2;i<=n;i++)
        {
            if(prime(i)==1) c++; 
        }
        printf("%d\n",c);
    }
    
    return 0;
}

