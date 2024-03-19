
#include <stdio.h>
int main(){
    int trump[4][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,0,0,0,0,0}};
    char a;
    int b,n,i;
    scanf("%d ",&n);
    
    for(i=0;i<n;i++){
        scanf("%c %d\n",&a,&b);
        
        if(a=='S')
            trump[0][b-1]=1;
        else if(a=='H')
            trump[1][b-1]=1;
        else if(a=='C')
            trump[2][b-1]=1;
        else if(a=='D')
            trump[3][b-1]=1;
    }
    int c,d,e,f;
    
    for(c=1;c<=13;c++)
        if(trump[0][c-1]!=1)
            printf("S %d\n",c);
    
    for(d=1;d<=13;d++)
        if(trump[1][d-1]!=1)
            printf("H %d\n",d);
    
    for(e=1;e<=13;e++)
        if(trump[2][e-1]!=1)
            printf("C %d\n",e);
    
    for(f=1;f<=13;f++)
        if(trump[3][f-1]!=1)
            printf("D %d\n",f);
    }
    

