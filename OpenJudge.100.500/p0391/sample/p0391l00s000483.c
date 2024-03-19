#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[1000],order[100][8],copy[1000], p[1000], keep[100][1000];
    int i, j, k, q, a, b, count=0;
    char *s1="print", *s2="reverse", *s3="replace";
    
    scanf("%s", str);
    scanf("%d", &q);
    
    for(i=0; i<q; i++){
        scanf("%s %d %d", order[i], &a, &b);
        if(strcmp(order[i],s1)==0){
            for(j=a, k=0; j<=b; j++, k++){
                keep[count][k]=str[j];
            }
            count++;
        }else if(strcmp(order[i],s2)==0){
            for(j=a; j<=b; j++){
                copy[j]=str[j];
            }
            for(j=a, k=b; j<=b; j++, k--){
                str[k]=copy[j];
            }
        }else if(strcmp(order[i],s3)==0){
            scanf("%s", p);
            for(j=a,k=0; j<=b; j++,k++){
                str[j]=p[k];
            }
        }
    }
    
    for(i=0; i<count; i++){
        printf("%s\n", keep[i]);
    }
    
    return 0;
}
