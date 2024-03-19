#include <stdio.h>

#define NO_DATA -1
#define MAX_COUNT 1000
int main(int argc, const char * argv[]) {
    int input;
    int result[MAX_COUNT];
    int scanResult;
    
    for (int i=0;i<MAX_COUNT;i++) {
        result[i]=NO_DATA;
    }
    
    scanResult = scanf("%d", &input);
    int count=0;
    int index=0;
    while (scanResult!=EOF) {
        count = 0;
        for (int i = 0 ; i < 10 ; i++)
        {
            for (int j = 0 ; j < 10 ; j++)
            {
                for (int k = 0 ; k < 10 ; k++)
                {
                    for (int l = 0 ; l < 10 ; l++)
                    {
                        if (i + j + k + l == input) count++;
                    }
                }
            }
        }
        result[index]=count;
        index++;
        scanResult = scanf("%d", &input);
    }
    
    for (int i=0;i<index;i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}

