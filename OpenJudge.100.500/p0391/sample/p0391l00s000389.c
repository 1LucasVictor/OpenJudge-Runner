#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    char tmp[1001];
    char order[8];
    char p[1001];
    int q, a, b, i, j;
    
    scanf("%s", str);
    scanf("%d", &q);
    
    for(i=0; i<q; i++){
        scanf("%s", order);
        scanf("%d%d", &a, &b);
        
        if(strcmp(order, "print")==0){
            for(j=a; j<=b; j++) printf("%c", str[j]);
            printf("\n");
        }
        
        else if(strcmp(order, "reverse")==0){
            strcpy(tmp, str);
            for(j=a; j<=b; j++) str[j] = tmp[b-j-a];
        }
        
        else if(strcmp(order, "replace")==0){
            scanf("%s", p);
            for(j=a; j<=b; j++) str[j] = p[j-a];
        }
    }
    return 0;
}