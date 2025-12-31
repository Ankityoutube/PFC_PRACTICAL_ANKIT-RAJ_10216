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

    int max = a[0][0];
    int min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
// OUTPUT
// Enter rows and columns: 3 4
// Enter elements:
// 2 3 4 5 
// 8 7 6 4
// 2 3 8 0
// Maximum = 8
// Minimum = 0