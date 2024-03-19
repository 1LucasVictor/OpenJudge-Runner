#include <stdio.h>
#include <stdlib.h>
/* #define debug */

int main(int argv, char *argc[]){
    
    int *determinant, *vector;
    int row, line, rcounter, lcounter, result;
    
    scanf("%d %d\n", &row, &line);
    #ifdef debug
    printf("debug1:row=%d line=%d\n", row, line);
    #endif
    
    determinant = calloc(row*line, sizeof(int));
    vector = calloc(row, sizeof(int));
    #ifdef debug
    printf("debug2:determinant & vector OK\n");
    #endif
    
    for(rcounter=0; row>rcounter; rcounter++){
        for(lcounter=0; line>lcounter; lcounter++){
            scanf("%d", &determinant[(rcounter*line) + lcounter]);
            if(line-1 >lcounter) scanf(" ");
            else scanf("\n");
        }
    }
    #ifdef debug
    for(rcounter=0; row*line>rcounter; rcounter++)printf("debug3:determinant=%d\n", determinant[rcounter]);
    #endif
    
    for(lcounter=0; line>lcounter; lcounter++){
        scanf("%d\n", &vector[lcounter]);
    }
    #ifdef debug
    for(lcounter=0; line>lcounter; lcounter++)printf("debug4:vector=%d\n", vector[lcounter]);
    #endif
    
    for(rcounter=0; row>rcounter; rcounter++){
        for(lcounter=0; line>lcounter; lcounter++){
             result += vector[lcounter] * determinant[(rcounter*line) + lcounter];
        }
        printf("%d\n", result);
        result = 0;
    }
    
    free(determinant);
    free(vector);
    return 0;
}