
#include <stdio.h>
#include<math.h>
int main()
{
 long int x,y,z,i,j,sum,temp;

scanf("%ld%ld%ld",&x,&y,&z);
if(x<y && x<z)
{
    printf("dangerous");

}else{
    if(x>y && x>=z)
    {
        printf("delicious");
    }else{
        if(x>y || x<=z)
        {
        printf("safe");
    }else{
        printf("dangerous");
    }
    }
}


    return 0;
}