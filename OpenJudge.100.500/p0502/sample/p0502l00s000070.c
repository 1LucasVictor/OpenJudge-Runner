#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int A[100];
    int i;
    int bl=1;

    for(i=0;i<N;i++){
        int x;
        scanf("%d",&x);
        if((x % 2==0) && (x %3 != 0) && (x %5 != 0)) bl=0;
    }
    if(bl) printf("APPROVED\n");
    else printf("DENIED\n");

}
