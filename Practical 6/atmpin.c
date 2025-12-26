//Ankit Raj 10216
#include <stdio.h>
int main() 
{
    int storedPin = 1234;
    int enterPin;
    printf("Enter your ATM PIN: ");
    scanf("%d", &enterPin);
    if (enterPin==storedPin) 
    {
        printf("Access Granted\n");
    } else 
    {
        printf("Incorrect pin\n");
    }
}
//output
//Enter your ATM PIN: 1234
//Access Granted