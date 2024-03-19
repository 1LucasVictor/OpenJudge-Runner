#include <stdio.h>
#include <string.h>
int main()
{
    int A, B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int b[101]={0};
    int a[101] = {0};
    for(int i=A;i<=B;i++)
        a[i]=1;
    for(int i=C;i<=D;i++)
        b[i]=1;
    int ans=0;
    for (int j = 0; j <101 ; ++j) {
        if (a[j]==1&&b[j]==1)
            ans++; 
    }
        
    
    printf("%d",ans-1);
}