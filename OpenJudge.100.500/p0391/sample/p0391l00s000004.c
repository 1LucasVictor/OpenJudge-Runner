#include<stdio.h>
#include<string.h>

int main(){
    char str[1000]={},p[20]={},h[1000]={},rev;
    int q,a,b,rep;
    scanf("%s",str);
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%s",p);
        if(strcmp(p,"replace")==0){
            rep =0;
            scanf("%d %d %s",&a,&b,h);
            for(int i=a;i<=b;i++){
                str[i] = h[rep];
                rep++;
            }
        }else if(strcmp(p,"reverse") == 0){
            scanf("%d %d",&a,&b);
            for(int i=a;i<b;i++){
                rev = str[i];
                str[i] = str[b];
                str[b] = rev;
                b--;
            }
        }else if(strcmp(p,"print")==0){
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;i++){
                printf("%c",str[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

