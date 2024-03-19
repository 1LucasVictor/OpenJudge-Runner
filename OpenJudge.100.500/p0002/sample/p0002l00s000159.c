#include<stdio.h>
#include<string.h>

int main(){

    int length[3];
    int n,i, max_index, tmp, tmp2;

    fscanf(stdin, "%d", &n);
    while ( (fscanf(stdin, "%d %d %d", &length[0], &length[1], &length[2])) != EOF){
        max_index = 0;
        tmp = 0;

        for(i=1; i<3; ++i){
            if(length[max_index] < length[i]){
                max_index = i;
            }
        }

        for (i=0; i<3; i++){
            tmp += length[i] * length[i];
        }
        tmp2 = length[max_index] * length[max_index];

        if ( (tmp - tmp2 * 2) == 0) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}