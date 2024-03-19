#include<stdio.h>
int main(){
    char str[40];
    int i, j = 0;
    scanf("%s", str);
    for(i = 1; str[i] != '\0';i++){
        if(str[i-1] == str[i])
            j++;
    }
    if(j>0)
        printf("Yes\n");
    else printf("No\n");
    return 0;
}


