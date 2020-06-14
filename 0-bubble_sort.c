#include "sort.h"
/**
*
*
**/
void bubble_sort(int *a, size_t s)
{
    size_t i, j, aux;

    /*printf("before\n");
    print_array(a, s);;*/

        for (i = 0; i < s-1; i++)
        {
            for (j = 0; j < s-1; j++)
            {
                if (a[j] > a[j + 1])
                {

                    aux = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = aux;
                    print_array(a, s);
                }
                /*printf("between\n");
                print_array(a, s);*/
            }
        }

    /*printf("\n\nafter\n");
    print_array(a, s);*/
}
