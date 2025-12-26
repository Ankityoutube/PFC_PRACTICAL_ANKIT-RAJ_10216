//Ankit Raj 10216
#include<stdio.h>
int main()
{
    int a,sum=0,i;
    printf("enter a: ");
    scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
     if(i%2!=0)
     {
        continue;
     }
     sum+=i;
   }
   printf("Sum: %d",sum);
}