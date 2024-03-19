#include<stdio.h>
int main()
{
    int i, flag=0;
    char s1[12], s2[12];
    scanf("%s", &s1);
    scanf("%s", &s2);

    for(i=0; s1[i] != NULL; i++){
        if(s1[i] != s2[i]){

            flag++;
        }
    }
    if(flag==0){
        printf("Yes\n");
    }
    else printf("No\n");

    return 0;
}
