#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    int length[3];
    int n;

    fscanf(stdin, "%d", &n);
    while ( (fscanf(stdin, "%d %d %d", &length[0], &length[1], &length[2])) != EOF){
        // 1. ?????????????????¨??¨??????.
        if (length[0] == length[1] ||
                length[1] == length[2] ||
                length[0] == length[2]){
            printf("NO\n");
            continue;
        }

        // 2. ??????????????????c??¨??????, c^2 = a^2 + b^2
        int max_index = 0;
        double tmp = 0;
        for(int i=1; i<n; ++i){
            if(length[max_index] < length[i]){
                max_index = i;
            }
        }

        for (int i=0; i<3; i++){
            if (i != max_index){
                tmp += pow((double)length[i], 2.0);
            }
        }

        if (pow((double)length[max_index], 2.0) == tmp) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}