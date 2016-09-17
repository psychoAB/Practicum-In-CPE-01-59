#include <stdio.h>

int max_of_three(int,int,int);

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maximum value is %d\n", max_of_three(a,b,c));

    return 0;
}

int max_of_three(int a,int b, int c)
{
    int maxValue = a;
    if(maxValue < b)
    {
        maxValue = b;
    }
    if(maxValue < c)
    {
        maxValue = c;
    }
    return maxValue;
}
