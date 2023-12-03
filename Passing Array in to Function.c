#include <stdio.h>
#include <conio.h>
int sum(int A[]);
int sum(int A[])
{
    int sum, i;
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + A[i];
    }
    return (sum);
}
float Avg(int B[]);
float Avg(int B[])
{
    int sum, i;
    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + B[i];
    }
    float Average = sum / 5;
    return (Average);
}

int main()
{
    int Array[5];
    printf("Enter the elements of the array:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The %d index number element of the given array is %d\n", i, Array[i]);
    }
    int s;
    s = sum(Array);
    printf("The sum of the array is %d\n", s);
    int a = Avg(Array);
    printf("The Average of the array is %d:\n", a);
    getch();
    return 0;
}