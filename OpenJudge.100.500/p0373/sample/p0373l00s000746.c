#include <stdio.h>
#include <stdlib.h>

void PrintFunction(int *,int *,int count);

void PrintFunction(int *Harray,int *Warray,int count)
{
    int j;
    int k;
    int l;
    int a,b,c;
 
    for(l=0;l<count-1;l++){
        for(j=0;j<Harray[l];j++)
        {
            if( (j==0) || (j==Harray[l]-1) ) { for(k=0;k<Warray[l];k++){ printf("#"); } }
            else
            {
                printf("#");
                for(a=1;a<Warray[l]-1;a++){ printf("."); }
                printf("#");                
            } 
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int H[100];
    int W[100];
    int count=0;
    int i=0;

    for(i=0;i<100;i++)
    {
        scanf("%d%d",&H[i],&W[i]);
        count++;
        if( H[i]==0 && W[i]==0 ) break;
        if( (H[i]<3 || H[i]>300) || (W[i]<3 || W[i]>300) ) return  1;
    }
    PrintFunction(H,W,count);
    return 0;
}