#include <stdio.h>
#define NUM 6

int main(void){
	double arg[NUM] = {0};
	int i = 0;
	int j = 0;
	int k;
	double delta;
	double x,y;
	int xZ,xF[4];
	int mflag = 0;
	int pflag = 0;
	int isEOF = 0;
	char c;
	while(1){
		while(1){
			c = getchar();
			if(c == EOF){
				isEOF = 1;
				break;
			}else if(c == ' ' || c == '\n'){
				if(mflag){arg[i] = -arg[i];}
				for (k = j; k > 0; k--){
					arg[i] /= 10;
				}
				i++;
				j = 0;
				mflag = 0;
				pflag = 0;
				if(c == '\n'){
					delta = arg[0] * arg[4] - arg[1] * arg[3];
					x = (arg[2] * arg[4] - arg[1] * arg[5]) /delta;
					y = (arg[0] * arg[5] - arg[2] * arg[3]) /delta;
					for(k = 0; k < NUM; k++){
						arg[k] = 0;
					}
					i = 0;
					if(x <= 0){mflag = 1;}
					xZ = (int)x;
					x = (x - xZ) * 10;
					if(x < 0){x = -x;}
					xF[0] = (int)x;
					for(k = 1; k <= 3; k++){
						x = (x - xF[k-1]) * 10;
						xF[k] = (int)x;
					}
					for(k = 3; k >= 0; k--){
						if(k == 0){
							if(xF[k] >= 5){xZ++;}
						}else{
							if(xF[k] >= 5){
								xF[k-1]++;
							}
						}
					}
					for(k = 0; k <= 3; k++){
						xF[k] %= 10;
					}
					if(mflag && xZ >= 0){xZ = -xZ;}
					mflag = 0;
					printf("%d.%d%d%d ",xZ,xF[0],xF[1],xF[2]);

					if(y <= 0){mflag = 1;}
					xZ = (int)y;
					y = (y - xZ) * 10;
					if(y < 0){y = -y;}
					xF[0] = (int)y;
					for(k = 1; k <= 3; k++){
						y = (y - xF[k-1]) * 10;
						xF[k] = (int)y;
					}
					for(k = 3; k >= 0; k--){
						if(k == 0){
							if(xF[k] >= 5){xZ++;}
						}else{
							if(xF[k] >= 5){
								xF[k-1]++;
							}
						}
					}
					for(k = 0; k <= 3; k++){
						xF[k] %= 10;
					}
					if(mflag && xZ >= 0){xZ = -xZ;}
					mflag = 0;
					printf("%d.%d%d%d\n",xZ,xF[0],xF[1],xF[2]);
					break;
				}
			}else if(c == '-'){
				mflag = 1;
			}else if(c == '.'){
				pflag = 1;
			}else{
				arg[i] = arg[i] * 10 + (c -'0');
				if(pflag){j++;}
			}
		}
		if(isEOF){break;}
	}
	return 0;
}