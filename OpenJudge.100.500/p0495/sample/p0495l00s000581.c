#include <stdio.h>
int main(void){
    
    char buf1[30];
    char sta[3];
    
    fgets(buf1, sizeof(buf1), stdin);
    sscanf(buf1, "%c%c%c", &sta[0], &sta[1], &sta[2]);
    
    if(sta[0] != sta[1])printf("Yes");
    else if(sta[1] != sta[2]) printf("Yes");
    else printf("No");
    
    return 0;
    
}
