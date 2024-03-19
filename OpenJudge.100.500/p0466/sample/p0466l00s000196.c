#include <stdio.h>
int main() {
    char s[11],t[12];	
    scanf("%s ",&s);	
    scanf("%s ",&t);
  
    int i;
    for (i = 0;s[i] != '\0';i++){
        if (s[i] != t[i]){
            printf("No");
            return 0;
        }
    }
 
    printf("Yes");
    return 0;
}
