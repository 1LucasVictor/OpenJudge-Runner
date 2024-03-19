#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    char S[100000];
    
    scanf("%s",S);
    
    int l=strlen(S);
    int il=l;
    
    while(1){
        int chan=0;
        
        for(int i=0;i<l-1;i++){
            if(S[i]==S[i+1]){
                for(int j=i;j<l-1;j++){
                    S[j]=S[j+2];
                }
                chan++;
                l-=2;
                //printf("p%s\n",S);
                //printf("%d\n",i);
            }
        }
        
        if(chan==0)break;
    }
    
    
    printf("%d\n",il-l);
    
}