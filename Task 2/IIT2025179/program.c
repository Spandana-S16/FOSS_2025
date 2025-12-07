#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Number | Square | Cube\n");
    printf("-----------------------\n");

    for (int i = 1; i <= N; i++) {
        printf("%d | %d | %d\n", i, i*i, i*i*i);
    }

    return 0;
}
