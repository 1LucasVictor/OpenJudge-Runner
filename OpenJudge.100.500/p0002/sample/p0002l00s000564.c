#include <stdio.h>

#define NO_DATA -1
#define MAX_COUNT 1000
int main(int argc, const char * argv[]) {
    // insert code here...
    int result[MAX_COUNT];
    int dataCount;
    
    for (int i = 0; i < MAX_COUNT; i++ ) {
        result[i] = NO_DATA;
    }
    
    scanf("%d", &dataCount);
    int data[3];
    for (int i=0;i<dataCount;i++) {
        scanf("%d %d %d", &data[0], &data[1], &data[2]);
        if (data[0] > data[1]) {
            int tmp=data[0];
            data[0]=data[1];
            data[1]=tmp;
        }
        if (data[1] > data[2]) {
            int tmp=data[1];
            data[1]=data[2];
            data[2]=tmp;
        }
        
        result[i]=(data[2]*data[2])==(data[1]*data[1]+data[0]*data[0])?1:0;
    }
    
    for (int i=0;i<dataCount;i++) {
        printf("%s\n", result[i]==1?"YES":"NO");
    }
    return 0;
}

