#include <stdio.h>
#include <stdlib.h>
#define LIMIT_N 200000
#define LIMIT_R 1000000000

//void insertionSort(int array[], int length) {
//    int key, i;
//    for (int j = 1; j < length; j++) {
//        key = array[j];
//        i = j-1;
//        while (i >= 0 && array[i] > key) {
//            array[i+1] = array[i];
//            i = i-1;
//        }
//        array[i+1] = key;
//        
//        
////        printf("\n");
////        for (int ixArray = 0; ixArray < length; ixArray++) {
////            if (ixArray != 0) printf(" ");
////            printf("%d", array[ixArray]);
////        }
//        
//    }
//}

int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    
    if (n < 2|| n > LIMIT_N)
        return (EXIT_FAILURE);
    
    const int numRate = n;
    int Rate[numRate]; 
    
    for (int currentTime = 0; currentTime < numRate; currentTime++) {
        scanf("%d", &Rate[currentTime]);
        
        
        if (Rate[currentTime] < 1 || Rate[currentTime] > LIMIT_R)
            return (EXIT_FAILURE);
//            break;
        
//        if (currentTime > LIMIT_N)
//            break;
    }
    
    int maximumDiffRate;
    int diffRate;
    int someTimeBefore = 0;
    for (int currentTime = 0; currentTime < numRate; currentTime++) {
        if (currentTime > 0) { // unable to determine rate difference for only one sample.
            if (currentTime == 1) // initial declaration of rate difference
                maximumDiffRate = Rate[currentTime] - Rate[0];
            else 
                for (someTimeBefore = 0; someTimeBefore < currentTime; someTimeBefore++) {
                    diffRate = Rate[currentTime] - Rate[someTimeBefore];
                    if (diffRate > maximumDiffRate)
                        maximumDiffRate = diffRate;
                }
        }
    }
//    insertionSort(Rate,numRate);
//    maximumDiffRate = Rate[numRate-1] - Rate[0];
//    
    printf("%d\n", maximumDiffRate);

    return (EXIT_SUCCESS);
}


