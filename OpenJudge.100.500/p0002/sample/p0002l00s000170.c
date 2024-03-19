#include<stdio.h>
#include<string.h>

int main(){

    int length[3];
    int n,i ;

    fscanf(stdin, "%d", &n);
    while ( (fscanf(stdin, "%d %d %d", &length[0], &length[1], &length[2])) != EOF){
        int max_index = 0;
        double tmp = 0;
        for(i=1; i<n; ++i){
            if(length[max_index] < length[i]){
                max_index = i;
            }
        }

        for (i=0; i<3; i++){
            if (i != max_index){
                tmp += length[i] * length[i];
            }
        }

        if (length[max_index] * length[max_index]  == tmp) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}