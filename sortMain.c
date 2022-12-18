#include <stdio.h>
#include <stdlib.h>
#include "SortClass.h"

int main()
{
    int elements[NUM_OF_ELEMENTS] = {0};
    size_t i = 0;
    int scan_status;
    int scan_val;

    while (i < NUM_OF_ELEMENTS)
    {
        if ((scan_status = scanf("%d", &scan_val)) == EOF)
        {
            break;
        }
        *(elements + i) = scan_val;
        i++;
    }
    
    insertion_sort(elements, NUM_OF_ELEMENTS);


    for (i = 0; i < NUM_OF_ELEMENTS; i++)
    {   
        if(i < NUM_OF_ELEMENTS - 1)
        {
            printf("%d,", *(elements + i));
        }
        else
        {
            printf("%d", *(elements + i));
        }
    }
    
    printf('\n');
}
