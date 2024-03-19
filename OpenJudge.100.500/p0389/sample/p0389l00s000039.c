#include<stdio.h>
 
char s[100000],p[300];
int shuffle[101];
 
int main(void){
    int i,j,k,n,head,l;
 
    while(1){
        scanf("%s",s);
        if(s[0] == '-' && s[1] == '\0')
            break;
 
        scanf("%d",&n);
        for(i = 0;i < n;i++)
            scanf("%d",&shuffle[i]);
 
        head = 0;
        l = 0;
        while(s[l++] != '\0');
        l--;
 
        for(i = 0;i < n;i++){
            for(j = 0;j < shuffle[i];j++){
                s[head + l + j] = s[head + j];
            }
            s[head + l  + j] = '\0';
            head += shuffle[i];
        }
        printf("%s\n",&s[head]);
    }
    return 0;
}
