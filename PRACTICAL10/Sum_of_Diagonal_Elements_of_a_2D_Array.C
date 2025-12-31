#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[10][10];

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// OUTPUT
// Enter order of square matrix: 2 2
// Enter elements:
// 1 2 
// 3 4
// Sum of diagonal elements = 5