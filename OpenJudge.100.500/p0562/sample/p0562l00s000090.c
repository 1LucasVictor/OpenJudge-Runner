#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=0;
    int cnt=1;
    while(cnt <b){
        ans++;
        cnt=cnt-1+a;
    }
    
    

    printf("%d\n",ans);
    return (0);
}
