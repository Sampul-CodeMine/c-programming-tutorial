/*
Write a program that takes an array of scores and outputs the
highest score and the lowest score
*/
#include <stdio.h>
#include <stdlib.h>

void sort_array(int *arr, int size)
{
        int low = 0, high = 0, itr = 0;

        low = arr[0];
        high = arr[0];
        for (itr = 1; itr < size; itr++)
        {
                if (arr[itr] < low)
                        low = arr[itr];
                if (arr[itr] > high)
                        high = arr[itr];
        }

        printf("\n\nHighest Score:\t%d\nLowest Score:\t%d", high, low);
}

void arr_high_low_score(void)
{
        int size = 0, itr;
        static int arr[20];

        printf("Class Size?:\t");
        if (scanf("%d", &size) == 1)
        {
                if (size < 1)
                {
                        printf("Your class size cannot be lesser than 1.");
                        exit(1);
                }
                else if (size > 20)
                {
                        printf("Your class size cannot be more than 20.");
                        exit(1);
                }
                for (itr = 0; itr < size; itr++)
                {
                        printf("Enter a score:\t");
                        scanf("%i", &arr[itr]);
                }

                sort_array(arr, size);
        }
}

int main(void)
{
        arr_high_low_score();

        return (0);
}