#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int sum(int *ptr);
int sum(int *ptr)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + ptr[i];
    }
    return (sum);
}
int Average(int *ptr);

int main()
{
    int size;
    printf("Enter the size of Array:");
    scanf("%d", &size);

    int Array[size];
    int *ptr = Array;
    ptr = (int *)malloc(size * sizeof(int));
    printf("Enter the Elements of the array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("The %d index number element of the given array is :%d\n", i, Array[i]);
    }
    int s = sum(Array);
    printf("The sum of the arrayb is %d", s);
    getch();
    return 0;
}