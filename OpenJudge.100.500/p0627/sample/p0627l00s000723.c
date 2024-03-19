#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,s1,s2,s3;
    while(~scanf("%d %d",&a,&b))
    {
       s1=a+b;
       s2=a-b;
       s3=a*b;
       if(s1>=s2&&s1>=s3)
        printf("%d\n",s1);
       else if(s2>=s1&&s2>=s3)
        printf("%d\n",s2);
       else if(s3>=s1&&s3>=s2)
            printf("%d\n",s3);
    }
}
