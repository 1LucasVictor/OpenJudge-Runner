#include <stdio.h>
#include <string.h>

#define S_MAX 100000

int main(){

    char s[S_MAX];
    int len;
    int n[S_MAX];
    int i, j, k;
    int cnt;
    int sum;

    scanf("%s", s);
    len = strlen(s);

    do{
//        printf("do\n");
        for(i=0 ; i<len ; i++){
//            printf("i:%d len:%d\n", i, len);
            if(s[i]!=s[i+1]){
//                printf("　s[%d]:%c s[%d]:%c\n", i, s[i], i+1, s[i+1]);
                cnt +=2;
                for(j=i+2 ; j<len ; j++){
                    s[j-2]    = s[j];
                }
                s[len-2] = NULL;
                s[len-1] = NULL;
//                printf("　処理後の文字列 %s\n", s);
                len = strlen(s);
//                printf("　処理後の文字列数 %d\n", len);
            }
        }

        // 文字列を数値列へ変換
        sum = 0;
    	for(k=0 ; k<len ; k++){
        	n[k] = s[k] - '0';
          	sum += n[k];
//            printf("　　n[%d]:%d sum:%d\n", k, n[k], sum);
    	}

    }while((sum!=0) && (sum!=len));

    printf("%d", cnt);

}