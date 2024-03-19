#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c;
    int i,cnt=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==5) cnt+=1;
    if(b==5) cnt+=1;
    if(c==5) cnt+=1;
    if(a+b+c==17 && cnt==2)
        printf("YES\n");
    else
        printf("NO\n");
}
