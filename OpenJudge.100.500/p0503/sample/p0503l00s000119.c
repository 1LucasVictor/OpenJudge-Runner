#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static int desc(const void *a, const void *b);
static int asc(const void *a, const void *b);

int main (void){
    int n,k,i,j;
    int x,y,z;
    int count = 0;
    double dx;
    int flg = 0;
    int box[200001]={};
    char text[200001]={};
    char s[200001]={};
    char t[200001]={};
    char alf[256] = {"abcdefghijklmnopqrstuvwxyz"};
    char alfb[256] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char sample_text[256];
    i = 0;j = 0;
    // Input Area //
   // scanf("%d %d",x,y);
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d",&box[i]);
    }
    qsort(box,n,sizeof(int),asc);
    for (i = 0; i < n - 1; i++){
        if (box[i] == box[i + 1]){
            flg = 1;
            break;
        }
    }
    if (flg == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    //scanf("%s",&sample_text);
    //scanf("%s",&text);

    /*
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&box[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d",box[i]);
    }
    printf("\n");
    qsort(box,n,sizeof(int),desc);
    
    */
    // Output Area //
    
    /*
    for(i = 0; i < n; i++){
        printf("%d",box[i]);
    }
    */

}

static int desc(const void *a, const void *b){

    return *(int *) b - *(int *) a;
}

static int asc(const void *a, const void *b){
    return *(int *) a - *(int *) b;
}


/* KonoLvBANK

配列降順ソート
qsort(box,n,sizeof(int),desc);
配列昇順ソート
qsort(box,n,sizeof(int),asc);

アルファベットを次の単語に変えるやつ
    while(1){
        if (text[i] == '\0'){
            break;
        }
        for(j = 0; j < 26; j++){
            if (text[i] == alf[j]){
                if (j != 25){
                    text[i] = alf[j + 1];
                }else{
                    text[i] = alf[0];
                }
                break;
            }
        }
        i++;
    }

*/
