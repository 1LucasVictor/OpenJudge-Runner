#include<stdio.h>
int main(){
    int i,a,b,c,n;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        a=i%10;
        b=i%100;
        c=i%1000;
        
        if(i%3==0)
        printf(" %d",i);
        else if(a==3)
        printf(" %d",i);
        else if(30<=b&&b<=39)
        printf(" %d",i);
        else if(300<=c&&c<=399)
        printf(" %d",i);
        else if(i/1000==3)
        printf(" %d",i);
    
    }
    printf("\n");
    
    return(0);
}
