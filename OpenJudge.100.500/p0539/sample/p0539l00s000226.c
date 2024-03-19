#include <unistd.h>
#include <stdio.h>

int main()
{
        char buf[4] = {0};
        int N = 0;

        int len = 0;
        int rank = 1;

        read(0, buf, 4);

        for (int i = 1; i < 4; i++) {
                if (buf[i] != 0) {
                        len++;
                }
        }

        for (int i = len; i > 0; i--) {
                N += (int)((buf[i-1] - 0x30) * rank);
                rank = rank * 10;
        }

        for (int i = 1; i < 10; i++) {
                for (int j = 1; j < 10; j++) {
                        if (N == (i * j)) {
                                write(1, "Yes\n", 4);
                                return 0;
                        }
                }
        }

        write(1, "No\n", 3);

        return 0;
}