#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
// OUTPUT
// Enter number of elements: 9
// Enter array elements:
// 3 4 6 
// 9 8 2
// 0 1 3 
// Sum of even elements = 20
