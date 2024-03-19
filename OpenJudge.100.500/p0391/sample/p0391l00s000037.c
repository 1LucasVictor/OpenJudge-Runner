#include <stdio.h>
int main()
{
    char str[1001], meirei[10], p[1001], c;
    int q, i, j, k, a, b;
    scanf("%s", str);
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%s", meirei);
        if(strcmp(meirei, "print")==0){
            scanf("%d %d", &a, &b);
            for(j=a; j<b+1; j++){
            printf("%c", str[j]);
            }
            printf("\n");
        } else if(strcmp(meirei, "reverse")==0){
            scanf("%d %d", &a, &b);
            for(j=0; j<b-a; j++){
                for(k=b-j; k>a; k--){
                    c=str[a];
                    str[a]=str[k];
                    str[k]=c;
                }
            }
        } else if(strcmp(meirei, "replace")==0){
            scanf("%d %d %s", &a, &b, p);
            for(j=0; j<b-a+1; j++){
                c=str[a+j];
                str[a+j]=p[j];
            }
        }
    }
    return 0;
}
