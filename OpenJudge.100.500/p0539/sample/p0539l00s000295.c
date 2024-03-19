#include<stdio.h>
int main(void){
    int N,count=0,an=0,nns=0;
    scanf("%d",&N);
    int ans[81];
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            count++;
            ans[count]=i*j;
            if(N!=ans[count])
                an=-1;
            else if(N==ans[count]){
                nns=1;
                break;
            }
        }
    }
    if(nns==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
    
}
