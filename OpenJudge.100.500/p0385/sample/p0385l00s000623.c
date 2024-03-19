#include<stdio.h>
#include<string.h>
int main(){

    while(1){
        int i,n=0;
        char x[1000];
        
        scanf("%s", &x);
        if(x[0]=='0'){
            break;
        }else{
            for(i=0;i<strlen(x);i++){
                n+=x[i]-'0';
            }
            printf("%d\n",n);
        }
    }
    return 0;
}
