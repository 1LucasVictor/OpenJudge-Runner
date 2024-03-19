#include<stdio.h>
int main()
{
    int a,b,j,i,s=0,e,o;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {   //s=0;
        scanf("%d",&b);
        s=0;
        if(b%2==0)
        {
            if(b%3!=0 && b%5!=0) s=1;
                //{printf("DENIED\n");}
               // else
                   //{
                      //printf("APPROVED\n");
                   //}
        }
        //if(b%2==0)
        //{
            //if(b%3==0 || b%5==0)
              //printf("APPROVED\n");
        //}

    }
    if(s==1)
        printf("DINIED\n");
    else
        printf("APPROVED\n");
    return 0;
}
