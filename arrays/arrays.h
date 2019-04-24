/*************************************************************
 * file name: arrays.h
 * description: this file contains information about arrays related
 *              functions
 *  copyright@javed
 ************************************************************/

#ifndef __ARRAYS_H__
#define __ARRAYS_H__

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for INT_MIN,INT_MAX etc
#include <time.h> //for time() function 
#include <stdbool.h> // for bool
#include <string.h>




/********************* MACROS, ENUMS & CONSTANTS *****************/

//array size for static arrays
#define ARRAY_SIZE 1024  
#define ARRAY_RAND_NUM 31

#define ARRAY_ERROR_HANDLE(x) \
        printf("ArrayError: %s\n",err_str[x])

typedef enum 
{
  ERR_ARR_PARAM_OK            =0, //ok
  ERR_ARR_SUCESS              =ERR_ARR_PARAM_OK,
  ERR_ARR_POINTER             =1, // array pointer error
  ERR_ARR_SIZE_ZERO           =2, // passed array size of zero 
  ERR_ARR_SIZE_EXCEEDED       =3, //passed size is more than array size
  ERR_ARR_INDEX_OUT_OF_RANGE  =4, //given index is out of array size range
  ERR_ARR_STACK_EMPTY         =5,
  ERR_ARR_STACK_OVERFLOW      =6,
  ERR_ARR_QUEUE_EMPTY         =7,
  ERR_ARR_QUEUE_FULL          =8,
  ERR_ARR_NUM
}array_error;


/******************** GLOBAL VARIABLE DECLARATIONS ************/
static int array_stack_top=-1;
static int array_queue_front=-1;
static int array_queue_rear=-1;

int array_stack[ARRAY_SIZE];
int array_queue[ARRAY_SIZE];
static const char *err_str[ERR_ARR_NUM] =
{ 
  /* 0*/ "operation successfull.",
  /* 1*/ "Invalid array Pointer is passed",
  /* 2*/ "size of array can not be zero",
  /* 3*/ "Array Size exceeds the limit",
  /* 4*/ "search index is out of array range",
  /* 5*/ "stack is empty",
  /* 6*/ "Stack is full. Stak overflow",
  /* 7*/ "Queue is empty",
  /* 8*/ "Queue is full"
};
/********************** FUNCTION PROTOTYPES ********************/

//filling arrays 
void array_fill(int *a, int size);
int array_refill(int *a);

//helper functions
void array_swap(int *, int *);
array_error Is_array_param_OK(const int *, int size, int op );

//print functions
void array_print(const int *a, int size);
void array_print_Sum_Of_Even_odd_elements(int *a, int size);
void array_print_at_index_element(int *a, int size, int index);

//find max or min related functions
int array_find_max(const int *a, int size);
int array_find_min(const int *a, int size);
int array_find_nth_max(const int *a, int size, int n);
int array_find_nth_min(const int *a, int size, int n);
int array_find_nth_max_min(int *a, int size, int n, char operation);
void array_find_functions_entry(int *a, int size);
//void array_find_function_exit();

//removing duplicates 
int array_remove_duplicates(int *a, int size);

//insertion - deletion related functions
bool array_insert_at_nth_index(int *a, int size, int );
int array_delete_nth_index_element(int *a, int size, int);

//array sorting related functions
int* array_sort(int *a, int size, char order);
int* array_quick_sort(int *a, int size);
int* array_bubble_sort(int *a, int size);
int* array_selection_sort(int *a, int size);
int* array_insertion_sort(int *a, int size);
int*  array_merge_sort(int *a, int size); 
void array_sort_entry(int *a, int size); //entry functions for sorting related functions
//merge two sorted arrays
void array_merge_two_sorted_arrays(int *a1,int size1, int *a2, int size2);

//concatenate two arrays
void array_concatenate(int *a1, int size1, int *a2, int size2);
void array_concatenate_without_loop(int *a1, int *a2, int size1, int size2);

// stack implementation functions using an array
bool Is_array_stack_empty();
bool Is_array_stack_full();
void array_stack_push(int );
int array_stack_pop();
void array_stack_delete();
void array_stack_display();
void array_stack_autopush();
void array_stack_entry(); //this function will be called from main to display stack related operation's options
void array_stack_exit(); // to exit from 

// queue implementation function using an array
bool Is_array_queue_empty();
bool Is_array_queue_full();
void array_queue_enque(int );
int array_queue_deque();
void array_queue_display();
void array_queue_autoenque();
void array_queue_entry(); //this function will be called from main to display queue related operation's options
void array_queue_exit();
void array_queue_delete();




void array_main_entry();
#endif /* __ARRAYS_H__ */
