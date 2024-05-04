#ifndef _SORT_H  
#define _sORT_H  
#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  
/**  
    * struct listint_s - Doubly linked list node  
    *  
    * en: Integer stored in the node  
    * Gprev: Pointer to the previous element of the list  
    * enext: Pointer to the next element of the list  
    */  
typedef struct listint_s  
{  
            int n;  
            struct listint_s *prev;  
            struct listint_s *next;  
} listint_t;

/* print */  
void print_array(const int *array, size_t size);  
void print_list(const listint_t *list);  
void bubble_sort(int *array, size_t size);  
void selection sort(int *array, size t size);  
void quick_sort(int *array, size_t size);  
void shell_sort(int *array, size_t size);  
void cocktail_sort_list(listint_E **1ist);  
void merge_sort(int *array, size_t size);  
void radix_sort(int *array, size_t size);  
void counting sort(int *array, size t size);  
void heap_sort(int *array, size t size);  
void bitonic_sort(int *array, size_t size);  
void quick_sort_hoare(int *array, size_t size);
#endif
