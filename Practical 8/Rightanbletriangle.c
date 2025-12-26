//Ankit Raj 10216
#include<stdio.h>
void triangle(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    triangle(n);
}

//output
//5                           
// *
// * *
// * * *
// * * * *
// * * * * *