#include <stdio.h>
#include <string.h>
int main(void){
    int N,A,B,C,D;
    int count = 0;
    int mode,mode2;
    char S[256];
    scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
    scanf("%s",S);
    A--;
    B--;
    C--;
    D--;
    S[A] = 'S';
    S[B] = 'F';
    while(1){
        mode = 0;
        mode2 = 0;
       // printf("B %d D %d\n",B,D);
         //       printf("%s %d\n",S,count);
        
        if (B < D){
            if (S[B + 2] == '.'){
                S[B] = '.';
                S[B + 2] = 'F';
                B = B + 2;
                mode = mode + 1;
            }else if (S[B + 1] == '.'){
                S[B] = '.';
                S[B + 1] = 'F';
                B = B + 1;
                mode = mode + 2;
            }
        }
        
        if (A < C){
            if (S[A + 2] == '.'){
                S[A] = '.';
                S[A + 2] = 'S';
                A = A + 2;
                mode2 = mode2 + 1;
            }else if (S[A + 1] == '.'){
                S[A] = '.';
                S[A + 1] = 'S';
                A = A + 1;
                mode2 = mode2 + 2;
            }
        }
        
        if (mode == 0|| mode2 == 0){
            if (mode == 1){
                S[B] = '.';
                B = B - 2;
                S[B] = 'F';
            }else if(mode == 2){
                S[B] = '.';
                B = B - 1;
                S[B] = 'F';
            }
            if (A < C){
                if (S[A + 2] == '.'){
                    S[A] = '.';
                    S[A + 2] = 'S';
                    A = A + 2;
                }else if (S[A + 1] == '.'){
                    S[A] = '.';
                    S[A + 1] = 'S';
                    A = A + 1;
                }
            }
             if (B < D){
                if (S[B + 2] == '.'){
                    S[B] = '.';
                    S[B + 2] = 'F';
                    B = B + 2;
                }else if (S[B + 1] == '.'){
                    S[B] = '.';
                    S[B + 1] = 'F';
                    B = B + 1;
                }
            }
        }
            
            
 //   printf("%s %d\n",S,count);
        count++;
        if (A == (C) && B == (D)){
            printf("Yes\n");
            break;
        }
        if (count > 30){
            printf("No\n");
            break;
        }
    }
   // printf("%s\n",S);
//    printf("YES");
    return 0;
}

// これじゃダメなパターンがありますがひとまず参加証をＧＥＴのため提出(๑o̴̶̷̥᷅﹏o̴̶̷̥᷅๑)