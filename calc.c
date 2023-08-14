#include<stdio.h>
int sum(int a, int b)
{
    return (a + b);
}
int diff(int a, int b)
{
    return (a - b);
}
void main()
{
    int s = sum(2, 4);
    print("sum = %d", s);
}