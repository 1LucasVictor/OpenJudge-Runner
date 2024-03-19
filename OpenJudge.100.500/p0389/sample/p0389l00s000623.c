#include <stdio.h>
#include <string.h> //文字列操作


int main () {
	char str[201]; //最後null文字入るからね
	int shu_time,shu_cont;
	int i,j,k,l;
	int tmp;
	
	for (i = 0;i < 10;i ++) {
		scanf ("%s",&str);
		if (strcmp (str,"-")  == 0) {
			break;
		}
		
		scanf ("%d",&shu_time); //シャッフル回数   
		for (j  = 0;j < shu_time;j ++) {
			scanf ("%d",&shu_cont); //shuffle_content 前から何枚後ろに
            while (shu_cont) {
            	tmp = str[0]; 
            	for (k = 1;k < strlen (str) ;k ++) { //strの中身をスライドします
            		str[k-1] = str[k];
            	}
            	str[strlen (str) - 1] = tmp;
                shu_cont --;	
            }
			
		}
		
		for (l = 0;l < strlen (str) ;l ++) {
			printf ("%c",str[l]);
		}
		putchar ('\n');
	}
	
	
	return 0;
}
