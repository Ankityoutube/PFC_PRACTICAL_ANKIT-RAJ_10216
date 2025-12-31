#include <stdio.h>

int main() {
    int n, i;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
// OUTPUT
// Enter number of elements: 9
// Enter array elements:
// 2 3 4 
// 4 5 7
// 7 8 9
// Reversed array:
// 9 8 7 7 5 4 4 3 2 