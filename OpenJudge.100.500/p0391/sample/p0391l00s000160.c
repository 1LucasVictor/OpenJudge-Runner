#include <stdio.h>
#include <string.h>
 
int read_line(char* out, size_t limit) {
    char* lf;
    if (fgets(out, limit, stdin) == NULL) return 0;
    if ((lf = strchr(out, '\n')) != NULL) *lf = '\0';
    return 1;
}
 
int main(void) {
    char str[1024];
    char command[4096];
    int q, query_count;
    if (!read_line(str, sizeof(str))) return 1;
    if (!read_line(command, sizeof(command)) || sscanf(command, "%d", &q) != 1) return 1;
    for (query_count = 0; query_count < q; query_count++) {
        int a, b;
        char *command_kind, *p;
        int i;
        if (!read_line(command, sizeof(command))) return 1;
        if ((command_kind = strtok(command, " ")) == NULL) return 1;
        if ((p = strtok(NULL, " ")) == NULL || sscanf(p, "%d", &a) != 1) return 1;
        if ((p = strtok(NULL, " ")) == NULL || sscanf(p, "%d", &b) != 1) return 1;
        if (strcmp(command_kind, "replace") == 0) {
            /* there doesn't seem a grantee that p consists of lowercase letters */
            if ((p = strtok(NULL, "")) == NULL) return 1;
            if (b < a || (size_t)(b - a + 1) != strlen(p)) return 1;
            memcpy(&str[a], p, b - a + 1);
        } else if (strcmp(command_kind, "reverse") == 0) {
            for (i = 0; a + i < b - i; i++) {
                char temp = str[a + i];
                str[a + i] = str[b - i];
                str[b - i] = temp;
            }
        } else if (strcmp(command_kind, "print") == 0) {
            for (i = a; i <= b; i++) putchar((unsigned char)str[i]);
            putchar('\n');
        } else return 1;
    }
    return 0;
}
