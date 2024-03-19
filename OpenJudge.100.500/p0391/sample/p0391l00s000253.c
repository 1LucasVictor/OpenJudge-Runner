#include<stdio.h>

#define MAX_STR_SIZE (1001)

void f_replace(char * str, int start_index, int end_index, char * replace_str);
void f_reverse(char * str, int start_index, int end_index);
void f_print(char * str, int start_index, int end_index);

int main(void)
{
        char input_str[MAX_STR_SIZE], command_str[MAX_STR_SIZE];
        char replace_str[MAX_STR_SIZE];
        int command_count, command_index, command_str_index;
        int start_index, end_index;

        scanf("%s", input_str);

        scanf("%d", &command_count);

        for(command_index=0; command_index < command_count; command_index++){
                scanf("%s%d%d", command_str, &start_index, &end_index);

                if(command_str[0] == 'p'){
                        f_print(input_str, start_index, end_index);
                }
                else if(command_str[0] == 'r' && command_str[1] == 'e' && command_str[2] == 'p'){
                        scanf("%s", replace_str);
                        f_replace(input_str, start_index, end_index, replace_str);
                }
                else if(command_str[0] == 'r' && command_str[1] == 'e' && command_str[2] == 'v'){
                        f_reverse(input_str, start_index, end_index);
                }

        }

        return 0;
}

void f_replace(char * str, int start_index, int end_index, char * replace_str){
        int index;

        for(index=start_index; index <= end_index; index++){
                str[index] = replace_str[index - start_index];
        }
}
void f_reverse(char * str, int start_index, int end_index){
        int index;
        char work_str[MAX_STR_SIZE];

        for(index=0; index <= (end_index - start_index); index++){
                work_str[index] = str[end_index - index];
        }

        for(index=start_index; index <= end_index; index++){
                str[index] = work_str[index - start_index];
        }
}
void f_print(char * str, int start_index, int end_index){

        int index;

        for(index=start_index; index <= end_index; index++){
                printf("%c", str[index]);
        }

        printf("\n");
}
