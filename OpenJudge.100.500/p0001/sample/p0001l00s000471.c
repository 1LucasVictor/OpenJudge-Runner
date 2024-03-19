#include<stdio.h>
 
int main(){
    int a,b,ans,k,t;
     
    while((scanf("%d",&a))!=EOF){
        scanf("%d",&b);
        t=a+b;
        for(ans=1;;){
            t=(t-t%10)/10;
            if(t>0)
            ans++;
            else{
                printf("%d\n",ans);
                break;
            }
        }
    }
         
     
    return 0;
}