#include <stdio.h>

#define NO_DATA -1
#define MAX_COUNT 50

int main(int argc, const char * argv[]) {
    int result[MAX_COUNT][2];
    int a,b;
    int scanResult;
    
    for (int i = 0; i < MAX_COUNT; i++ ) {
        result[i][0] = NO_DATA;
        result[i][1] = NO_DATA;
    }
    
    int count=0;
    scanResult = scanf("%d %d", &a, &b);
    
    while (scanResult!=EOF) {
        
        if(a<b){
           int tmp = a;
           a = b;
           b = tmp;
         }
        
        int r = a % b;
        int x,y=b;
        while(r!=0){
          x = y;
          y = r;
          r = x % y;
        }

        result[count][0] = y;
        result[count][1] = a/y*b;

        count++;
        scanResult = scanf("%d %d", &a, &b);
    }
    
    for (int i=0;i<count;i++) {
        printf("%d %d\n", result[i][0], result[i][1]);
    }
    return 0;
}

