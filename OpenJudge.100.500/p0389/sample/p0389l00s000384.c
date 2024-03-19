 #include <stdio.h>
 #include <string.h>

int main(void){
    char s[200];
    char cpy[200];
    int sh, h;
    int i, j, len;
    while(1){
        scanf("%s", s);
        len = strlen(s);
        if(!strcmp(s, "-"))
            break;
        scanf("%d", &sh);
        for(i = 0; i < sh; i++){
            memset(cpy, '\0', sizeof(cpy));
            scanf("%d", &h);
            strcpy(cpy, &s[h]);
            strncat(cpy, s, h);
            cpy[len] = '\0';
            strcpy(s, cpy);
        }
        puts(s);
    }
    return 0;
}

