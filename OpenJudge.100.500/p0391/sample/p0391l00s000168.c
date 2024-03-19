#include <stdio.h>
#include <string.h>

int main(void){
    // Your code here!
    char str[1001] = {};
    char tmp[1001] = {};
    char b1[1001]  = {};
    char b2[1001]  = {};
    char mode[10];
    
    int num1,num2;
    char repstr[1001] = {};
    
    int i,j,cnt;
    
    scanf( "%s" , str );
    scanf( "%d" , &cnt );
    
    for( ; 0 < cnt; cnt-- ){
        scanf( "%s" , mode );
        scanf( "%d %d" , &num1, &num2 );
        
        if( strcmp( mode , "print" ) == 0 ){
            //printf("print->");
            for( i = num1; i <= num2 ; i++ ){
                printf( "%c" , str[i] );
            }
            printf("\n");
        }else if( strcmp( mode , "replace" ) == 0 ){
            scanf( "%s" , repstr );
            //printf("replace->%s",repstr);
            for( i = 0, j = 0 ; i < strlen(str) ; i++ ){
                if( i < num1 || num2 < i ){
                    tmp[i] = str[i];
                    //printf("%c を %c\n", tmp[i] , str[i] );
                }else if( num1 <= i && i <= num2 ){
                    tmp[i] = repstr[j];
                    //printf("%c を %c\n", tmp[i] , str[j] );
                    j++;
                }
            }
            for( i = 0 ; i < strlen(str) ; i++ ){
                str[i] = tmp[i];
            }
            
        }else if( strcmp( mode , "reverse" ) == 0 ){
            //printf("reverse->");
            for( j = num1; j <= num2 ; j++ ){
                tmp[num2 - j] = str[j];
                //printf("%c\n", tmp[num2 - j] );
            }
            for( i = 0 , j = num1; j <= num2 ; i++ , j++ ){
                //printf("%c を %c\n", str[j] , tmp[i] );
                str[j] = tmp[i];
            }
        }
        
        //printf("モード：%s (%s)\n" , mode , str);
    }
    
}

