#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// OUTPUT
// Enter rows and columns: 4 3
// Enter elements:
// 2 4 5 
// 1 2 3
// 2 4 6
// 7 6 5
// Sum of row 1 = 11
// Sum of row 2 = 6
// Sum of row 3 = 12
// Sum of row 4 = 18