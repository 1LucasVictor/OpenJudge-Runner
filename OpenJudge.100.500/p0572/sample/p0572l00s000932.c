#include<stdio.h>
int main()
{
    int l,r;
    int i,j;
    int imod;
    int iminmod = 2020; 

    scanf("%d%d",&l,&r);

    i = l;
    if(r-l>=2019){
        printf("%d\n",0);
    }
    else{
    for(j =i+1; j<=r; j++ ){
        for(i = l; i<=j-1;i++){
            imod=(i*j)%2019;
            if(imod < iminmod){
                iminmod = imod;               
            }
        }
    }
    }
       
     printf("%d\n",iminmod);
     }
