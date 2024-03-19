#include <stdio.h>


int main()
{
    int i[3],a,b;
    scanf("%d %d %d", &i[0],&i[1],&i[2]);
    
    for(a=0;a<2;a++){
        if(i[a]>i[a+1]){
            b=i[a],i[a]=i[a+1],i[a+1]=b;
        }
    }
    
    for(a=0;a<2;a++){
        if(i[a]>i[a+1]){
            b=i[a],i[a]=i[a+1],i[a+1]=b;
        }
    }
    
    
    printf("%d %d %d",i[0],i[1],i[2]);
    printf("\n");
    return 0;
    
}


