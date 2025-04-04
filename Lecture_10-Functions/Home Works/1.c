/*
Write a function that takes an integer parameter (i.e., n) and returns the result of
1 pow(3) + 2 pow(3) + 3 pow(3)+ � + n pow(3). Write a program that reads a positive integer up to 1000 and
uses the function to display the result of the expression.
*/
#include <stdio.h>
double sum_cube(int num);
int main()
{
    int i;
    do
    {
        printf("Enter number: ");
        scanf("%d", &i);
    }
    while(i < 0 || i > 1000);
    printf("Result = %.0f\n", sum_cube(i));
    return 0;
}
double sum_cube(int num)
{
    int i;
    double sum; /* It�s declared as double in order to store larger
numbers. */
    sum = 0;
    for(i = 1; i <= num; i++)
        sum += i*i*i;
    return sum;
}
