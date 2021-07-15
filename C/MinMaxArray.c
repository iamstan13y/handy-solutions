#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int fa = *((int *)a);
    int fb = *((int *)b);
    if (fa < fb)
        return -1;
    if (fa > fb)
        return 1;
    return 0;
}

    int main()
    {

        int my_array[5], sorted[5];
        int i, x, min, max;

        printf("Enter the values for your array:\n");

        for (i = 0; i < 5; i++)
        {
            scanf("%d", &my_array[i]);
        }

        qsort(my_array, 5, sizeof(my_array), compare);

        // min = array[0];
        // for (i = 0; i < 5; i++)
        // {
        //     if (min < array[i])
        //     {
        //         for (x = 0; x < 5; x++)
        //         {
        //             if (!(max > array[x]))
        //             {
        //                 max = array[x];
        //             }
        //         }
        //     }
        //     else
        //     {
        //         min = array[i];
        //     }
        // }
        // printf("MIN: %d\n", min);
        // printf("MAX: %d\n", max);

         printf("\nThe Sorted Array Elements:\n");
        for (i = 0; i < 5; i++)
        {
         printf("%d\n", my_array[i]);
         }

        return 0;
    }