#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inp_str(long int*);

int main(void) {

long int input1[150];
inp_str(input1);

long int N,L;

N=input1[0];

int A,B,C,D;
A=N/1000;
N=N-A*1000;
B=N/100;
N=N-B*100;
C=N/10;
N=N-C*10;
D=N;



//printf("%d\n",A);
//printf("%d\n",B);
//printf("%d\n",C);
//printf("%d\n",D);


if(A==B){
printf("Bad\n");
} else if(B==C){
printf("Bad\n");

} else if(C==D){
printf("Bad\n");

} else {
printf("Good\n");

}




    return 0;

}


void inp_str(long int instr[]){
char *ptr;
long int z,i,count;
char str[20000]={'\0'};
char *ln;

fgets(str, 20000, stdin); // 入力："123456\n"
ln = strchr(str, '\n'); /* 改行文字を検索 */
if (ln != NULL) { /* 改行が読み取られていたかどうか */
   *ln = '\0';    /* 改行文字を終端文字に置き換える */
}
else {            /* 入力ストリーム上に文字が残ってる場合 */
   while (1) {    /* 改行文字が読み取られるまで空読みする */
       z = getchar();
      if (z == '\n' || z == EOF) break;
   }
}
	count=0;
    ptr = strtok(str, " ");
    i = atol(ptr);
    instr[count]=i;
    count=count+1;
    // 2回目以降
    while(ptr != NULL) {
        // strtok関数により変更されたNULLのポインタが先頭
        ptr = strtok(NULL, " ");
        // ptrがNULLの場合エラーが発生するので対処
        if(ptr != NULL) {
		    i = atol(ptr);
    instr[count]=i;
    		count=count+1;
        }
    }
}

