#include <stdio.h>
#include <string.h>

int main(){

    int n,m;
    scanf("%d%d",&n,&m);

    int i;
    int ints[m],intc[m];
    char s[m],c[m];
    for(i=0;i<m;i++){
        scanf("%d%d",&ints[i],&intc[i]);
        s[i]='0'+ints[i];
        c[i]='0'+intc[i];
    }

    // printf("s is %c\n",s[0]);

    if(n==1){
        char ansstr='F';
        
        for(i=0;i<m;i++){
            // printf("inkya");
            // if(s[i]!=1){
            //     printf("-1");
            //     return 0;
            // }
            if(ansstr=='F'){
                ansstr=c[i];
                // printf("sounyuu %c",ansstr[s[i]-1]);
            } else if(ansstr!=c[i]){
                printf("-1");
                return 0;
            }
        }
        if(ansstr=='F') ansstr='0';
        printf("%c",ansstr);

    } else if(n==2){
        char ansstr[2];
        for(i=0;i<2;i++){
            ansstr[i]='F';
        }
        for(i=0;i<m;i++){
            // printf("inkya");
            // if(ints[i]!=1&&ints[i]!=2){
            //     printf("-1");
            //     return 0;
            // }
            if(ansstr[ints[i]-1]=='F'){
                ansstr[ints[i]-1]=c[i];
                // printf("sounyuu %c",ansstr[s[i]-1]);
            } else if(ansstr[ints[i]-1]!=c[i]){
                printf("-1");
                return 0;
            }
        }

        if(ansstr[0]=='0'){
            printf("-1");
            return 0;
        } else if(ansstr[0]=='F'){
            ansstr[0]='1';
        }

        if(ansstr[1]=='F'){
            ansstr[1]='0';
        }

        for(i=0;i<2;i++){
            printf("%c",ansstr[i]);
        }


    } else if(n==3){
        char ansstr[3];
        for(i=0;i<3;i++){
            ansstr[i]='F';
        }
        for(i=0;i<m;i++){
            // printf("inkya");
            // if(ints[i]!=1&&ints[i]!=2&&ints[i]!=3){
            //     printf("-1");
            //     return 0;
            // }
            if(ansstr[ints[i]-1]=='F'){
                ansstr[ints[i]-1]=c[i];
                // printf("sounyuu %c",ansstr[s[i]-1]);
            } else if(ansstr[ints[i]-1]!=c[i]){
                printf("-1");
                return 0;
            }
        }
        if(ansstr[0]=='0'){
            printf("-1");
            return 0;
        } else if(ansstr[0]=='F'){
            ansstr[0] = '1';
        }

        if(ansstr[1]=='F') ansstr[1]='0';
        if(ansstr[2]=='F') ansstr[2]='0';

        for(i=0;i<3;i++){
            printf("%c",ansstr[i]);
        }
    }
    
    return 0;
}