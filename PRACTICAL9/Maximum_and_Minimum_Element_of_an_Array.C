#include <stdio.h>

int main() {
    int n, i, max, min;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
// OUTPUT
// Enter number of elements: 9
// Enter array elements:
// 2 4 6 
// 6 7 9
// 1 3 9 
// Maximum = 9
// Minimum = 1
