#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,a,b,c,d;
    char s[200000];
    int result = 1;

    if(scanf("%d %d %d %d %d", &n, &a, &b, &c, &d) < 5){
        exit(1);
    }
    if(scanf("%s", s) <1){
        exit(1);
    }
    
    while(c != a || d !=b){
 //       printf("%d, %d\n",a,b);
        
        if(c > d && a < b){
            if(s[a+1] == '.' && (a+2) != b && (a+2) <= c){
                a = a + 2;
            }else if(s[a] == '.' && (a+1) != b && (a+1) <= c){
                a++;
            }else if((a+2) == b || (a+1) == b){
                if(s[b] == '.' && (b+1) <= d){
                    b++;
                }else if(s[b+1] == '.' && (b+2) <= d){
                    b = b + 2;
                }
                else{
                    result = 0;
                    break;
                }
            }else{
                result = 0;
                break;
            }
        }else if(c > d && c != a){
            if(s[a+1] == '.' && (a+2) <= c){
                a = a + 2;
            }else if(s[a] == '.' && (a+1) <= c){
                a++;
            }else{
                result = 0;
                break;
            }
        }else if(c > d && d != b){
            if(s[b+1] == '.' && (b+2) <= d){
                b = b + 2;
            }else if(s[b] == '.' && (b+1) <= d){
                b++;
            }else{
                result = 0;
                break;
            }
        }else if(d != b){
            if(s[b+1] == '.' && (b+2) <= d){
                b = b + 2;
            }else if(s[b] == '.' && (b+1) <= d){
                b++;
            }else{
                result = 0;
                break;
            }
        }else if(c != a){
            if(s[a+1] == '.' && (a+2) <= c){
                a = a + 2;
            }else if(s[a] == '.' && (a+1) <= c){
                a++;
            }else{
                result = 0;
                break;
            }
        }
    }
//    printf("%d, %d\n",a,b);
    
    if(result == 0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}
