#include <stdio.h>

int main(){
    char w[200];
    char W[200];
    int N;
    int n;
    
    while(1){
        scanf("%s",w);
        if(w[0]=='-')
            break;
        
        scanf("%d",&N);//処理回数

        for(int i=0;i<N;i++){
            //回数読み取り
            scanf("%d",&n);
            //シャッフル
            int f=0;
            for(int g=0;w[n+g]!='\0';g++,f++){
                W[f]=w[n+g];
            }
            for(int g=0;g<n;g++,f++){
                W[f]=w[g];
            }
            W[f]='\0';
            //元に戻す
            for(int g=0;W[g]!='\0';g++){
                w[g]=W[g];   
            }
        }
        printf("%s\n",w);
    }
}
