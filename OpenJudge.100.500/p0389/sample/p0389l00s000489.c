#include <stdio.h>
#include <string.h>

int main(void){
    char str[201];
    int length, times;

    while(1) {
        scanf("%s\n", str);
        if (str[0] == '-')
            return 0;

        length = strlen(str);
        scanf("%d\n", &times);
        for (int i = 0; i < times; i++)
        {
            int n;
            char moved[201];
            
            scanf("%d\n", &n);
    
            for(int i = 0; i < n; i++)
                moved[i] = str[i];
            moved[n] = '\0';
        
            for(int i = n; i < length; i++)
                str[i-n] = str[i];
        
            for(int i = 0; i < strlen(moved); i++)
                str[length - n + i] = moved[i];
            
        }
        printf("%s\n", str);
    }

    return 0;
}

