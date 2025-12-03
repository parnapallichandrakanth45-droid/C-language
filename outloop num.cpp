#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = n * 2 - 1;  // total rows/columns

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int top = i;
            int left = j;
            int bottom = size - i + 1;
            int right = size - j + 1;

            // find minimum distance from any edge
            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            // print pattern
            printf("%d ", n - min + 1);
        }
        printf("\n");
    }

    return 0;
}

