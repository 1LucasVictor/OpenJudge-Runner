#include<stdio.h>
int main(){
    int cat,cod,tcat;
    scanf("%d %d %d",&cat,&cod,&tcat);
    if(cat<=tcat && tcat<=cat+cod) printf("YES\n");
    else printf("NO\n");
    return 0;
}