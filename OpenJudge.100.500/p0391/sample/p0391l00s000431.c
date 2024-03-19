#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int length_of_string = 1005;

char* reverse(char *rev_str, int start, int end){
    char *rev_str_copied;
    rev_str_copied = (char*)malloc(length_of_string * sizeof(char));
    memset(rev_str_copied, '\0', length_of_string);
    
    /*step 1: copy string of lenght of statr to rev_str_copied*/
    strncpy(rev_str_copied, rev_str, start); 
    
    /*step 2: reverse the string form start to end*/
    int i,j;
    for(i=end,j=start; i>=start,j<=end; i--,j++){
        *(rev_str_copied+j) = *(rev_str+i);
    }

    /*step 3: copy the other character to rev_str_copied*/
    rev_str += (end + 1);/*go to index end+1*/
    strcat(rev_str_copied, rev_str);
   
    /*step 4: copy rev_str_copied to rev_str*/
    rev_str -= (end+1);//important!! can't delete
    strcpy(rev_str, rev_str_copied);
    
    free(rev_str_copied);
    return rev_str;
}

void print(char* str, int start, int end){
    int i;
    for(i=start; i<=end; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
}

char *replace_string(char *str, int start, int end, char *replace_str){
    int i;
    for(i=start; i<= end; i++){
        *(str+i) = *replace_str;
        replace_str++;
    }
    return str;
}

int main(){
    char *str;
    str = (char*)malloc(length_of_string * sizeof(char));
   
    fgets(str, length_of_string*sizeof(char), stdin);
    *(str+strlen(str)-1) = '\0';
    int instr_num;
    scanf("%d", &instr_num);
    getchar();//important!!
    int i;
    for(i=0; i<instr_num; i++){
        char instr[2000];
        fgets(instr, sizeof(instr), stdin);
        instr[strlen(instr)-1] = '\0';
        if(instr[2] == 'p'){
            char in_replace_string[length_of_string];
            int start_index, end_index;
            sscanf(instr, "replace %d %d %s", &start_index, &end_index, in_replace_string);
            replace_string(str, start_index, end_index, in_replace_string);        
        }
        else if(instr[2] == 'v'){
            int start_index, end_index;
            sscanf(instr, "reverse %d %d", &start_index, &end_index);
            reverse(str, start_index, end_index);
        }
        else if(instr[2] == 'i'){
            int start_index, end_index;
            sscanf(instr, "print %d %d", &start_index, &end_index);
            print(str, start_index, end_index);
        }
    }
    free(str);
}

