#include <stdio.h>
#include <math.h>

#define MAX_ELE 1000000

int stack[102];
int stack_num = 0;

//functions
void calc(int op);


int main(void){

	int i=0;
	char tmp=0,c;
	int tmp_array[10],tmp_num=0;
	int num=0;
	int polish[201];
	//input
	while(tmp != '='){
		scanf("%c",&tmp);
		if(tmp == '=' || tmp =='\n') break;
		if(tmp == ' ') continue;
		if(tmp == '+' || tmp == '*'|| tmp == '-') polish[num++] = tmp;
		else{
			tmp_num = 0;
			tmp_array[tmp_num++] = tmp-'0';
			while((c=getchar()) != ' '){
				tmp_array[tmp_num++] = c-'0';
				for(i=0;i<tmp_num-1;i++){
					tmp_array[i] = tmp_array[i]*10;
				}
			}
			tmp = 0;
			for(i=0;i<tmp_num;i++) tmp += tmp_array[i];
			polish[num++] = tmp;
		}
	}

	//calculate
	for(i=0;i<num;i++){
		if(polish[i] == '+' || polish[i] == '*'|| polish[i] == '-'){
			calc(polish[i]);
		}else{
			stack[stack_num]=polish[i];
			stack_num++;
		}
}
//output
printf("%d\n",stack[0]);
return 0;
}

void calc(op){
	int result;
	if(op == '+'){
		result = stack[stack_num-1] + stack[stack_num-2];
		stack[stack_num-2] = result;
	}else if(op == '*'){
		result = stack[stack_num-1] * stack[stack_num-2];
		stack[stack_num-2] = result;
	}else if(op == '-'){
		result = stack[stack_num-2] - stack[stack_num-1];
		stack[stack_num-2] = result;
	}
	stack[stack_num-1] = '\0';
	stack_num--;
	return;
}