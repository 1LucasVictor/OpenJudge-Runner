#include<stdio.h>
int main()
{
    int A,B,X1,X2,X3;
    scanf("%d %d",&A,&B);
    X1=A+B;
    X2=A-B;
    X3=A*B;
    if(X1>=X2 && X1>=X3)
    {
        printf("%d\n",X1);
    }
   else if(X2>=X1 && X2>=X3)
    {
        printf("%d\n",X2);
    }
   else 
    {
        printf("%d\n",X3);


    }
    return 0;


}
