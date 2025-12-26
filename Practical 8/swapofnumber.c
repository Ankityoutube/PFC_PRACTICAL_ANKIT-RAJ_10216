//Ankit Raj 10216
#include<stdio.h>
void swap(int* a,int * b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("befor: x= %d , y= %d\n",x,y);
    swap(&x,&y);
    printf("After x=%d , y=%d",x,y);

}
//output
// 1 2
// befor: x= 1 , y= 2
// After x=2 , y=1