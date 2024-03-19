#include<stdio.h>
int main(){
    int n,m,i,a,b;
    scanf("%d%d",&n,&m);
    char s[5]={};
    while(m--){
        scanf("%d%d",&a,&b);
        if(a==1&&b==0&&n-1) goto END;
        if(s[a-1]&&s[a-1]-b-'0') goto END;
        s[a-1]=b+'0';
    }
    if(s[0]==0) s[0]=n-1?'1':'0';
    for(i=0;i<n;i++)
        if(!s[i])
            s[i]='0';
    printf("%s\n",s);
    return 0;
    END: ;
    printf("-1\n");
    return 0;
}