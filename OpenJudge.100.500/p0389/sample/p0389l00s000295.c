#include<stdio.h>
int main(){
    int s[400], m, i, j, l=0, h;
    while(1){
        int l=0;
        while((s[l++]=getchar())!='\n'){}
        if(s[0]=='-')break;
        scanf("%d", &m);
        for(i=0; i<m; i++){
            scanf(" %d", &h);
            for(j=0; j<l-1; j++)s[l-1+j]=s[j];
            for(j=h; j<h+l-1; j++)s[j-h]=s[j];
        }
        for(i=0; i<l-1; i++)printf("%c", s[i]);
        (void)getchar();
        printf("\n");
    }
    return 0;
}