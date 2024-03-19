#include<stdio.h>
int main()
{
    int n,a[101],i,f[101]={0},ff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]%3!=0 && a[i]%5!=0) f[i]=1;
        }
        
    }
    for(i=0;i<n;i++){
        if(f[i]==1) ff++;
    }
    if(ff==0){
        printf("APPROVED\n");
    }else{
        printf("DENIED\n");
    }
    return 0;
    
}