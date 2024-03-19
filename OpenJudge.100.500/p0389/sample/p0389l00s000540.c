#include<stdio.h>
#include<string.h>

int main()
{
    int m,s;
    char h[200]={},box;
    while(1)
    {
        scanf("%s",h);
        if(h[0] == '-') break;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&s);
            for(int j=0;j<s;j++){
                box = h[0];
                for(int b=0;b<strlen(h)-1;b++){
                    h[b] = h[b+1];                }
                h[strlen(h)-1] = box;
            }
        }
        for(int i=0;i<strlen(h);i++){
            printf("%c",h[i]);
        }
        printf("\n");
    }
    return 0;
}
