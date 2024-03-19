#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution_printed;                        //如果已經輸出過答案就不繼續輸出了
char solution[8][8];                         //紀錄答案的矩陣
char row[8];                                 //紀錄左右方向的橫線碰撞資訊 (ex row[0] = true or white or red or 'Q'代表第一行已經被占用)
char col[8];                                 //紀錄垂直方向的直線碰撞資訊
char right_slope[15];                        //紀錄向右傾斜的斜線碰撞資訊 其中 對於座標(x = 0, y = 0)而言，他所隸屬的右斜線編號為第一條 轉換公式為 (x+y)%15 
char left_slope[15];                         //紀錄向左傾斜的鞋線碰撞資訊 其中 對於座標(x = 0, y = 0)而言，他所隸屬的左斜線編號為中央第一條 轉換公式為 (x-y+15)%15

void __init(void);
void __set_without_checking(int r, int c);  //將確定是皇后的題目條件輸入至對應的所有矩陣的方程式
int __cal_slope_r(int x, int y);            //return 給定x,y座標對應的右斜線編號( 0 號右斜線會通過0,0   14 號右斜線會通過8,8 )
int __cal_slope_l(int x, int y);            //return 給定x,y座標對應的左斜線編號( 0 號左斜線會通過0,0   14 號左斜線會通過0,1   13 號左斜線會通過0,2    1 號左斜線會通過1,0    2 號左斜線會通過2,0

void eight_queen(int c);                    //八皇后遞迴的啟動式
void __eight_queen(int x, int y, int c);    //八皇后的遞迴主體

void print_solution(void);

void tint(int x, int y);                    //tint = 著色 ; 在此指將對應的矩陣位置給值。 
                                            //ex 如果位於 2,2 的點要被設定為皇后 那 solution[2][2] 會被設定成 'Q', 
                                            //row[2] = 'Q' col[2] = 'Q' right_slop[(2+2)%15] = 'Q' left_slop[(2-2+15)%15] = 'Q'
void un_tint(int x, int y);                 //消除這個點x y 相關的污染座標標記 (ex 我們發現這不是真正的queen ,需要被拔掉)

int is_all_clean(int x, int y);             //根據給定的x,y  確定所有x,y 相關的軸向與solution 本身是否為乾淨的 回傳 1 = 乾淨 0 = 有被污染過

int next_x(int x, int y);                   //根據給定的當前x,y 推論下個x y 分別是誰。 基本原則，若是還沒走到8,8 那萬一x = 7, 下一個x 就要歸零 , Y 要+1

int next_y(int x, int y);

int main (){
	int k=0;
	int r = 0;
	int c = 0;
    int counter = 0;                        // 用來記錄到底在開始計算之前被設定了多少個點
	scanf("%d",&k);                         // 取得k, 其實這時候也可以counter = k  這樣迴圈內就不用counter++
	while(k>0){
        scanf("%d %d",&r,&c);
		tint(r,c);                          // 把已知皇后的地方上色，並且把四個關係軸對應的位置都上色
        counter++;
		k--;
	}
    eight_queen(counter);

	return 0;
}// end of main function

void __init(){
    solution_printed = 0;
    memset(solution, '.', sizeof(char)*8*8);
    memset(row, '.', sizeof(char)*8);
    memset(col, '.', sizeof(char)*8);
    memset(right_slope, '.', sizeof(char)*15);
    memset(left_slope, '.' , sizeof(char)*15);

    return;
} // end of __init function

int __cal_slope_r(int x, int y){ return (x+y)%15;
} // end of __cal_slope_r
int __cal_slope_l(int x, int y){ return (x-y+15)%15;
} // end of __cal_slope_l


void eight_queen(int c){
    __eight_queen(0, 0, c);
} // end of eight_queen
void __eight_queen(int x, int y, int c){
    if(c == 8){                             // 如果已經找到八個皇后 就 輸出 然後 返回
        if(!solution_printed){
            print_solution();
            solution_printed = 1;
        } 
        return; 
    }                   
    if(x >= 8){ return; }                   // 超界
    if(row[x] == 'Q'){                      // 如果這個點所在的那層(x) 不潔 (這個x 這一層已經有Q 了) 
        if(x < 7){                          // 且x 還沒超過7 (x = 7 代表這是最後一行了) 
            __eight_queen(x+1, 0 , c);      // 就繼續下一層 (這一層已經有Q, 直接進入下一層) x+1代表下一層 y = 0 代表從頭掃, c 不用變更，畢竟我們這一層確定有既有Q 了 那理論上c早就加過了
        }else{                              // 倘若x  == 7 或者大於7 那代表這式最後一行或者出包了 總之就return
            return; 
        }
    }                                        
    
                                            // 對於當前x,y 因為會執行到這裡代表 當前x y 的各種軸向上沒有皇后，所以我開始嘗試每個都擺擺看
    for(y = 0; y < 8 ;y ++ ){               // 擺擺看的方法就是用個for 迴圈，咬住x 軸 對每個y (用for 掃過去) 都嘗試讓他當皇后看看 一旦讓那個點當皇后了(前提當然是他要乾淨), 就換行(x+1) 然後去下一層
        if(is_all_clean(x,y)){                  
                                            // 如果這個點與他相關的軸向都是乾淨的，代表他可能是Queen 讓他當當看(tint)
            tint(x,y);                      // 因此我們先將他設定為Queen, 並且汙染所有相關的軸向。
            __eight_queen(x+1, 0 , c+1);    // 暫時結束這一層 進入下一層遞迴  x+1 代表下一層 y = 0 代表下一層也都要重掃 c+1 是因為我們剛剛(假裝)找到多一個queen 所以queen counter ++
            un_tint(x,y);                   // 如果執行到這行，代表前一次嘗試結束了 (選了一個點 然後繼續下一層 如此類推直到找到八個或者啥都沒有 所以要把東西清乾淨 當作剛剛什麼都沒發生。ˇ
        }
    }
} // end of __eight_queen function

void tint(int x, int y){
    solution[x][y] = 'Q';
    row[x] = 'Q';
    col[y] = 'Q';
    right_slope[__cal_slope_r(x,y)] = 'Q';
    left_slope[__cal_slope_l(x,y)] = 'Q';
} // end of tint function

void un_tint(int x, int y){
    solution[x][y] = '.';
    row[x] = '.';
    col[y] = '.';
    right_slope[__cal_slope_r(x,y)] = '.';
    left_slope[__cal_slope_l(x,y)] = '.';
} // end of un_tint function


int is_all_clean(int x, int y){
    if(solution[x][y] == 'Q'){return 0;}
    if(row[x] == 'Q'){return 0;}
    if(col[y] == 'Q'){return 0;}
    if(right_slope[__cal_slope_r(x,y)] == 'Q'){return 0;}
    if(left_slope[__cal_slope_l(x,y)] == 'Q'){return 0;}

    return 1; // return 1 代表乾淨 在別的語言可以寫成reuturn true
} // end of is_all_clean

void print_solution(){
    int i;
    int j;

    for(i = 0; i < 8 ; i++){
        for(j = 0; j<8 ; j++){
            if(solution[i][j] == 'Q'){
                printf("Q");
            }else{
                printf(".");
            } 
        }
        printf("\n");
    }
    return;
}

