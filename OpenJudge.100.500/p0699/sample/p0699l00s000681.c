#include<stdio.h>
#include<string.h>


int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    //printf("%d,%d,%d\n",A,B,C);
    int five,seven;
    five = seven = 0;
    if(A==5) five++;
    else if(A==7)seven++;
    if(B==5) five++;
    else if(B==7)seven++;
    if(C==5) five++;
    else if(C==7)seven++;
    //printf("%d,%d\n",five,seven);
    if(five==2&&seven==1)
        printf("YES");
    else printf("NO");
    return 0;
}
