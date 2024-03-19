#include <stdio.h>
int main(void){
    int stack[11],i=0,j=0,temp,ans[11]={0};
    while(scanf("%d",&temp)!=EOF) {
        if(temp!=0){
            stack[i]=temp;
            i++;
        } else {
            ans[j]=stack[i-1];
            j++;
            i--;
        }
    }
    for(i=0;i<j;i++) printf("%d\n",ans[i]);
    return 0;
}