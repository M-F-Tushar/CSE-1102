/*Write a program that reads 8 integers, stores them in a 2×4 array, and displays the
array elements in reverse order, from the lower-right element to the upper-left one.*/
#include <stdio.h>
#define ROWS 2
#define COLS 4
int main()
{
    int i, j, arr[ROWS][COLS];
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nArray elements\n");
    printf("--------------\n");
    for(i = ROWS-1; i>=0; i--)
    {
        for(j = COLS−1; j >= 0; j−−)
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }
    return 0;
}
