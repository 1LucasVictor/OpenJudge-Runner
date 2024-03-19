#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    int n, m;
    int s[6], c[6];
    
    //条件を入力
    scanf("%d%d", &n,&m );
    for ( int i=0; i<m; i++ ){
        scanf("%d%d", &s[i], &c[i]);
    }
    
     //n>=2 の時、存在しない場合を出力
    if ( n >= 2 ){

    for ( int i=0; i<m; i++ ){
        
        if ( s[i] == 1 && c[i] == 0 ){
            printf("-1\n");
            return 0;
        }
        
        for ( int j=0; j<m; j++ ){
            if ( s[i] == s[j] && c[i] != c[j] ){
                printf("-1\n");
                return 0;
            }
        }
    }
        
    }
    
    //n=1の場合の存在しない条件
    if ( n == 1 ){
        for ( int i=0; i<m; i++ ){
            for ( int j=0; j<m; j++ ){
                if ( s[i] == s[j] && c[i] != c[j] ){
                    printf("-1\n");
                    return 0;
                }
            }
        }
    }
    
    //条件を反映させる
    int ans[3] = {-1,-1,-1};
    
    for ( int i=0; i<m; i++){
        
        switch (s[i]){
            case 1:
                ans[0] = c[i];
                break;
            case 2:
                ans[1] = c[i];
                break;
            case 3:
                ans[2] = c[i];
                break;
            default:
                //NOT_REACHED
                break;
        }
        
    }
        
    
    
        //条件以外の桁を埋める
        if ( n == 1 ){
            if ( ans[0] == -1 ){
                printf("0\n");
                return 0;
            }
            printf("%d\n",ans[0]);
            return 0;
            
        } else if ( n == 2 ){
            
            if ( ans[0] == -1 ) {
                ans[0] = 1;
                if ( ans[1] == -1 ) ans[1] = 0;
                
            } else if ( ans[0] != -1 ) {
                
                if ( ans[1] == -1 ) ans[1] = 0;
            }
            printf("%d%d\n", ans[0],ans[1]);
            return 0;
            
        } else if ( n == 3 ){
            
            if ( ans[0] == -1 ){
                
                ans[0] = 1;
                if ( ans[1] == -1 ) ans[1] = 0;
                if ( ans[2] == -1 ) ans[2] = 0;
                
            } else if ( ans[0] != -1 ){
                
                if ( ans[1] == -1 ) ans[1] = 0;
                if ( ans[2] == -1 ) ans[2] = 0;
            }
            printf("%d%d%d\n",ans[0],ans[1],ans[2]);
            return 0;
    }

}
