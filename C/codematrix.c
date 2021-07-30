#include <stdio.h>

int main()
{
	
    int arr[5][5];;
    int input, i, j;

    printf("Read a 2D array of size 5 x 5 and print the matrix\n");
    printf("--------------------------------------------------\n");

    printf("\nInput the array elements:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &input);
            arr[i][j] = input;
        }
    }

    //Output
    printf("\nThe Matrix:"); 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //Minimum
    int min = arr[0][0];
    int max = arr[0][0];
    printf("\nThe Max and Min:\n"); 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] <= min)
            {
                min = arr[i][j];
            }
            else if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}

