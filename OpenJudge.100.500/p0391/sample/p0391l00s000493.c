#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000];
    int num;
    
    scanf("%s\n", str);
    scanf("%d\n", &num);
    
    for (int i = 0; i < num; i++)
    {
        char buf[1000];
        
        char name[8];
        int param1, param2;
        char replaced[1000];
        scanf("%s %d %d\n", name, &param1, &param2);
        // printf("%s %d %d\n", name, param1, param2);  // DEBUG
        // printf("%s\n", str); // DEBUG

        if (strcmp(name, "print") == 0)
        {
            strncpy(buf, str+param1, param2-param1+1);
            buf[param2-param1+1] = '\0';
            printf("%s\n", buf);
        }
        else if (strcmp(name, "reverse") == 0)
        {
            int start = param1;
            int end = param2;
            
            strcpy(buf, str);
            while(start < end)
            {
                char tmp;
                tmp = buf[start];
                buf[start] = buf[end];
                buf[end] = tmp;
                start++;
                end--;
            }
            strcpy(str, buf);
        }
        else if (strcmp(name, "replace") == 0)
        {
            strcpy(buf, str);
            scanf("%s\n", replaced);
            for(int i = 0; i < (param2 - param1 + 1); i++)
            {
                buf[i + param1] = replaced[i];
            }
            strcpy(str, buf);
        }
    }
    
    return 0;
}

