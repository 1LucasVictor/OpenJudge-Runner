#include <stdio.h>
void print(char *str, char *text)
{
    char word[100];
    int x, y;
    int j;
    sscanf(text, "%s %d %d", word, &x, &y);
    for(j = x; j <= y; j++){
        printf("%c", *(str + j));
    }
    printf("\n");
}

void reverse(char *str, char *text)
{
    char word[20];
    char aaa[10];
    int x, y;
    //int j;
    sscanf(text, "%s %d %d", word, &x, &y);
    while(x != y){
        aaa[0] = *(str + x);
        *(str + x) = *(str + y);
        *(str + y) = aaa[0];
        if(x - y == 1 || y - x == 1)
            break;
        x++;
        y--;
    }
}

void replace(char *str, char *text)
{
    char word[20];
    char vfx[1001];
    int x, y, z;
    int j;
    sscanf(text, "%s %d %d %s", word, &x, &y, vfx);
    for(j = 0; x <= y; j++, x++){
        *(str + x) = vfx[j];
    }
}

int main(void){
    char str[1010];
    char number[111];
    char text[1111];
    int n;
    //int x, y, z;
    int j, q, k, a;
    fgets(str, 1010, stdin);
    fgets(number, 111, stdin);
    sscanf(number, "%d", &n);
    for(j = 0; j < n; j++){
        fgets(text, 1111, stdin);
        if(text[3] == 'n'){
            print(str, text);
        }else if(text[3] == 'e'){
            reverse(str, text);
        }else{
            replace(str, text);
        }
    }
    return 0;
}
