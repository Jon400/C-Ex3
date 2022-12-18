#include <stdlib.h>
#include <stdio.h>
#include "SortClass.h"

// will right-shift the i cells follow the index by one step.
void shift_element(int* arr, int i) 
{
    int * p_last = arr + i;
    while (p_last != arr)
    {
        *(p_last) = *(p_last - 1);
        p_last--;
    }
    
}

// will sort the array up to the length using insertion sort algorithm
void insertion_sort(int* arr , int len)
{
    size_t i;
    for (i = 0; i < len - 1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            int * p_temp = (arr + i + 1);
            int tempVal = *(arr + i + 1);
            int count = 0;

            while ((tempVal <= *p_temp) && (p_temp != arr))
            {
                count++;
                p_temp--;
            }

            if (tempVal > *p_temp){
                p_temp++;
                count--;
            }

            shift_element(p_temp, count);
            *p_temp = tempVal; 
        }
    }
    
}
