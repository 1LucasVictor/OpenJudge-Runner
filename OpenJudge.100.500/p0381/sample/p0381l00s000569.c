#include <stdio.h>

int main() {
    int n, x; //n:?????§?????° x:????¨??????°
    int sumCount[10000] = {0};
    int dataSetCount;
    int i, j, k;
    dataSetCount = 0;
    
    scanf("%d %d", &n, &x);

    while (n != 0 && x != 0) {

    //??\???????????£???????????????????????????
        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                for (k = j + 1; k <= n; k++) {
                    if (i + j + k == x) {
                        sumCount[dataSetCount]++;
                    }
                }
            }    
        }

    dataSetCount++;
    scanf("%d %d", &n, &x);

    }
    
    for (i = 0; i < dataSetCount; i++) {
        printf("%d\n", sumCount[i]);
    }
    return 0;
}