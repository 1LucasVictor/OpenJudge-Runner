#include<stdio.h>
int main(){
    int i,n;
    char x[5];
    scanf("%d",&n);
    for(i=2;i<=n;i+=1){
        sprintf(x,"%d",i);
        if(i%3==0){
        printf(" ");
            if(i==n){
                printf("%d\n",i);
            }
            else{
                printf("%d",i);
            }
        }
        else if(x[0]=='3' || x[1]=='3' || x[2]=='3' || x[3]=='3' || x[4]=='3'){
        printf(" ");
            if(i==n){
                printf("%d\n",i);
            }
            else{
                printf("%d",i);
            }
        }
    }
    return 0;
}