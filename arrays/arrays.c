/*************************************************************
 * file name: arrays.c
 * description: this file contains arrays related function implementations
 *
 *  copyright@javed
 ************************************************************/

#include "arrays.h"

/************************************************************
 *Function    : Is_array_param_OK
 *Descritpion : this function check for the valid array parameters 
 *Parameters  :pointer to an array and size of the array
 *Return      : true if Params are ok else false
 *************************************************************/
array_error Is_array_param_OK(const int *a, int size , int op_index)
{
    if(a==NULL)
    {
      return ERR_ARR_POINTER;
    }
    else if(size == 0)
    {
      return ERR_ARR_SIZE_ZERO;
    }
    else if(size >= ARRAY_SIZE)
    {
      return ERR_ARR_SIZE_EXCEEDED;
    }
    else if( (op_index!=0) && (op_index <0 || op_index >= size) )
    {
      return ERR_ARR_INDEX_OUT_OF_RANGE;
    }
    else 
    {
      return ERR_ARR_PARAM_OK;
    }
   return ERR_ARR_PARAM_OK;
}


/************************************************************
 *Function    : array_fill
 *Descritpion : this function populates the elements of the arrays 
 *              automatically with randome number
 *Parameters  :pointer to an array and size of the array
 *Return      : void
 *************************************************************/
void array_fill(int *a, int size)
{
 array_error ret= Is_array_param_OK(a,size,0);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return;
  }
  else
  {
    int i;
    srand(time(0)); //providing seed for rand function
    for(i=0; i<size ; i++)
    {
      a[i]=rand()%ARRAY_RAND_NUM;
    }
  }
}

/************************************************************
 *Function    : array_refill
 *Descritpion : this function populates the elements of the arrays 
 *              automatically with randome number
 *Parameters  :pointer to an array and size of the array
 *Return      : new size
 *************************************************************/
int array_refill(int *a)
{
  int size;
  memset(a,0,ARRAY_SIZE);
  printf("Enter the size to refil the array:");
  scanf("%d",&size);
  array_fill(a,size);
return size; 
}

/************************************************************
 *Function    : array_swap
 *Descritpion : this is a helper function to swaps two elements of an array
 *Parameters  :pointers to array elements to be swapped
 *Return      : void
 *************************************************************/

void array_swap(int *a , int *b)
{
  if(a && b) //both are not pointing to NULL
  {
    int temp=*a;
        *a=*b;
        *b=temp;
  }
}


/************************************************************
 *Function    : array_remove_duplicates
 *Descritpion : this function removes duplicate elements of an array
 *Parameters  : pointer to an array and size of the array
 *Return      : returns the new size of the array
 *************************************************************/
int array_remove_duplicates(int *a, int size)
{
  int i,j,k;
  for(i=0; i<size; i++)
  {
      for(j=i+1; j<size ; )
      { 
        if(a[i]==a[j])
        {
          k=j;
          while(k<size)
          { 
            a[k]=a[k+1];
            k++;
          }
          size--;
        }
        else 
        {
          j++;
        }
      }        
  }

return size;
}

/************************************************************
 *Function    : array_insert_at_nth_index
 *Descritpion : this function inserts an element to the given index of an array
 *Parameters  : pointer to an array and size of the array and index
 *Return      : returns true if insertion was successful else false
 *************************************************************/
bool array_insert_at_nth_index(int *a, int size, int n)
{
  if( n<0 && n>=size)
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_INDEX_OUT_OF_RANGE);
  }
  else
  {
    a[n]=500;
  }
  return 0;
}

/************************************************************
 *Function    : array_delete_nth_index_element
 *Descritpion : this function removes nth element of an array
 *Parameters  : pointer to an array and size of the array and index of element
 *              element to be removed
 * Return      : returns true if insertion was successful else false
 *************************************************************/
int array_delete_nth_index_element(int *a, int size, int n)
{
  return -1;
}


/************************************************************
 *Function    : array_merge_two_sorted_arrays
 *Descritpion : this function merge two sorted arrays in sorted fashion
 *Parameters  :pointers to two arrays and sizes of the arrays
 *Return      : void
 *************************************************************/
void array_merge_two_sorted_arrays(int *a1, int size1, int *a2 ,int size2)
{
  return;
}

// ***********************************************************
//  -------------- ARRAY PRINT RELATED FUNCTIONS ------------
// ***********************************************************
/************************************************************
 *Function    : array_print
 *Descritpion : this function prints the elements of an array
 *Parameters  :pointer to an array and size of the array
 *Return      : void
 *************************************************************/
void array_print(const int *a, int size)
{
  array_error ret= Is_array_param_OK(a,size,0);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return;
  }
  else
  {
    printf("\n-------------- Started displaying array elements -----------------\n");
    printf("Total array elements:%d\n",size);
    int i;
    for(i=0; i<size; i++)
    {
      printf("%d ",a[i]);
    }
  }

printf("\n-------------- Finished displaying array elements -----------------\n");
}


/************************************************************
 *Function    : array_print_Sum_Of_Even_odd_elements
 *Descritpion : this function prints the sum of even and odd position elements
 *Parameters  :pointer to an array and size of the array
 *Return      : void
 *************************************************************/

void array_print_Sum_Of_Even_odd_elements(int *a, int size)
{
  int odd_sum=0, even_sum=0;
  array_error ret= Is_array_param_OK(a,size,0);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return;
  }
  else
  {
    int i;
    for(i=0; i<size; i++)
    {
      if(i%2 ==0)
      {
        even_sum+=a[i];
      }
      else
      {
        odd_sum+=a[i];
      }
    }
  }
  printf("odd_sum:%d\teven_sum:%d\n",odd_sum,even_sum);
}

/************************************************************
 *Function    : array_print_at_index_element
 *Descritpion : this function prints given index elements
 *Parameters  :pointer to an array and size of the array
 *Return      : void
 *************************************************************/
void array_print_at_index_element(int *a, int size, int index)
{
printf("in index_print: %d\n",index);
  array_error ret= Is_array_param_OK(a,size,index);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return;
  }
  else
  {
     printf("element at index %d is:%d\n",index,a[index]);
  }

}


// -------------- FIND RELATED FUNCTIONS ------------------
/************************************************************
 *Function    : array_find_max
 *Descritpion : function to find the max element of an array              
 * Parameters :pointer to an array and size of the array
 * Return     : max element index of the array
 * ************************************************************/
int array_find_max(const int *a, int size)
{
  int max=a[0], max_index=0;
  int i;
  array_error ret= Is_array_param_OK(a,size,0);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return -1;
  }
  else
  {
    for( i=1; i< size ;i++)
    {
     if(a[i]>max)
     {
       max_index=i;
       max=a[i];
      }
    }
  }
return max_index;
}

/************************************************************
 *Function    : array_find_min
 *Descritpion : function to find the min element of an array              
 * Parameters :pointer to an array and size of the array
 * Return     : min element index of the array
 * ************************************************************/
int array_find_min(const int a[], int size)
{
  int min=a[0],min_index=0;
  int i;
  array_error ret= Is_array_param_OK(a,size,0);   
  if(ret != ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return -1;
  }
  else
  {
    for( i=1; i< size ;i++)
    {
     if(a[i] < min)
      {
        min_index=i;
        min=a[i];
      }
    }
  }
return min_index;
}

/************************************************************
 *Function    : array_find_nth_max
 *Descritpion : function to find the nth max element of an array              
 * Parameters :pointer to an array and size of the array and 
 *              n to find the nth max element
 * Return     : nth max element 
 * ************************************************************/
int array_find_nth_max(const int *a, int size, int n)
{
 
/* int min=a[0];
  int i;
  for( i=1; i< size ;i++)
  {
    if(a[i] < min)
    min=a[i];
  }
return min;*/
}

/************************************************************
 *Function    : array_find_nth_min
 *Descritpion : function to find the nth max element of an array              
 *              n to find the nth min element
 * Parameters :pointer to an array and size of the array
 * Return     : nth max element 
 * ************************************************************/
int array_find_nth_min(const int *a, int size, int n)
{ 
/* int min=a[0];
  int i;
  for( i=1; i< size ;i++)
  {
    if(a[i] < min)
    min=a[i];
  }
return min;*/
}


/************************************************************
 *Function    : array_find_functions_entry
 *Descritpion : entry function for find operation related functions
 *              and shows the menu for it
 * Parameters :pointer to an array and size of the array
 * Return     : void
 * ************************************************************/
void array_find_functions_entry(int *a, int size)
{
  char op;
  int n, index;
  printf("\nYour array_find options:\n");
  while(1)
  {
    printf("\ta:find max \n\tb:find nth max\n\tc:find mininum\n\td:find nth min\n\te:find nth min_max\n\tz:exit form the find menu\n");
    scanf(" %c",&op);
    switch(op)
    {
      case 'a': 
                index=array_find_max(a,size);
                printf("Max element of the array is:%d at index:%d\n",a[index],index);
              break;
      case 'b': 
                printf("Enter the nth value to find nth max of tha array:");
                scanf("%d",&n);
                index=array_find_nth_max(a,size,n);
                if(n==1)
                printf("\n%dst max element in the array is: %d at index:%d\n",n,a[index],index);
                else if(n==2)
                printf("%dnd max element in the array is: %d at index:%d\n",n,a[index],index);
                else if(n==3)
                printf("%drd max element in the array is: %d at index:%d\n",n,a[index],index);
                else
                printf("%dth max element in the array is: %d at index:%d\n",n,a[index],index);
            break;
      case 'c':
              index=array_find_min(a,size);
              printf("Min element of the array is:%d at index:%d\n",a[index],index);
            break;
      case 'd':
                printf("Enter the nth value to find nth min of the array:");
                scanf("%d",&n);
                index=array_find_nth_min(a,size,n);
                if(n==1)
                printf("\n%dst min element in the array is: %d at index:%d\n",n,a[index],index);
                else if(n==2)
                printf("%dnd min element in the array is: %d at index:%d\n",n,a[index],index);
                else if(n==3)
                printf("%drd min element in the array is: %d at index:%d\n",n,a[index],index);
                else
                printf("%dth min element in the array is: %d at index:%d\n",n,a[index],index);
            break;
    case 'z': 
            printf("\nExiting from the array_find_functions_entry function..\n");
            return;
    default: printf("Wrong choice!!! please try again"); break;      
    }
  }
}

// ********************************************************
// ---------- SORT RELATED FUNCTIONS --------
// ********************************************************
/************************************************************
 *Function    : array_sort
 *Descritpion : array sort  functions
 * Parameters :pointer to an array and size of the array
 *              order: decides the order of the sorting 
 *                    a - for ascending
 *                    d - for descending  
 * Return     : void
 * ************************************************************/
int* array_sort(int *a, int size, char order)
{
  return (int *)NULL;
}

/************************************************************
 *Function    : array_quick_sort
 *Descritpion : array quick sort  functions
 * Parameters :pointer to an array and size of the array  
 * Return     : pointer to sorted array
 * ************************************************************/
int* array_quick_sort(int *a, int size)
{
  return (int *)NULL;
}

/************************************************************
 *Function    : array_bubble_sort
 *Descritpion : array bubble sort  function
 * Parameters :pointer to an array and size of the array  
 * Return     : pointer to sorted array
 * ************************************************************/
int* array_bubble_sort(int *a, int size)
{
  return (int *)NULL;
}


/************************************************************
 *Function    : array_selection_sort
 *Descritpion : array selection sort  function
 * Parameters :pointer to an array and size of the array  
 * Return     : pointer to sorted array
 * ************************************************************/
int* array_selection_sort(int *a, int size)
{
  return (int *)NULL;
}

/************************************************************
 *Function    : array_merge_sort
 *Descritpion : array selection sort  function
 * Parameters :pointer to an array and size of the array  
 * Return     : pointer to sorted array
 * ************************************************************/
int* array_merge_sort(int *a, int size)
{
  return (int *)NULL;
}


/************************************************************
 *Function    : array_insertion_sort
 *Descritpion : array selection sort  function
 * Parameters :pointer to an array and size of the array  
 * Return     : pointer to sorted array
 * ************************************************************/
int* array_insertion_sort(int *a, int size)
{
  return (int *)NULL;
}


/************************************************************
 *Function    : array_sort_entry
 *Descritpion : array sort  entry function 
 * Parameters :pointer to an array and size of the array
 * Return     : void
 * ************************************************************/
void array_sort_entry(int *a, int size)
{
  char ch;
  int data;
  array_error ret=Is_array_param_OK(a,size,0);
  if(ret!=ERR_ARR_PARAM_OK)
  {
    ARRAY_ERROR_HANDLE(ret);
    return;
  }
  else
  {
    while(1)
    {
      printf("You array_sort choice");
      printf("\n\tb:bubble sort\n\ts:selection sort\n\ti:insertion sort\n\tm:merge sort\n");
      printf("\tq:quick sort\n\tz:to exit\n");
    
      scanf(" %c",&ch);
    
      switch(ch)  
      {
        case 'b':
                array_bubble_sort(a,size);
              break;
        case 's':
                array_selection_sort(a,size);
              break;
        case 'i':
                array_insertion_sort(a,size);
              break;
        case 'm':
                array_merge_sort(a,size);
              break;
        case 'q':
                array_quick_sort(a,size);
              break;
        case 'z':
                return;
             break;
         default:  
               printf("\nWrong input!! Please re-try\n");
              break;
      }
    }//while
  }//else
}



// ********************************************************
//  --------- STACK RELATED FUNCTIONS ----------
// ********************************************************

/************************************************************
 *Function    : Is_array_stack_empty
 *Descritpion : checks if stack is empty 
 * Parameters :void
 * Return     : true if stack is empty else false
 * ************************************************************/
bool Is_array_stack_empty()
{
  if(array_stack_top == -1)
  {
    return true;
  }
  return false;
}

/************************************************************
 *Function    : Is_array_stack_full
 *Descritpion : checks if stack is full
 * Parameters :void
 * Return     : true if stack is full else false
 * ************************************************************/
bool Is_array_stack_full()
{
  if(array_stack_top == ARRAY_SIZE)
  {
    return true;
  }
  return false;
}

/************************************************************
 *Function    : array_stack_push
 *Descritpion : add a elements to top of stack
 * Parameters :data to be pushed on the stack
 * Return     : void
 * ************************************************************/
void array_stack_push(int data)
{
  if(Is_array_stack_full())
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_STACK_OVERFLOW);
    return;
  }
  array_stack_top++;
  array_stack[array_stack_top]=data;
  return;
} 

/************************************************************
 *Function    : array_stack_pop
 *Descritpion : delete top elements from stack
 * Parameters : void
 * Return     : popped data
 * ************************************************************/
int array_stack_pop()
{ 

  if(Is_array_stack_empty())
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_STACK_EMPTY);
    return -1;
  }
  int temp= array_stack[array_stack_top];
  array_stack_top--;
  return temp;
}

/************************************************************
 *Function    : array_stack_delete
 *Descritpion : delete the full stack
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_stack_delete()
{
 printf("Warinig: Deleting the full stack\n");
  while(array_stack_top >=0)
  {
    array_stack[array_stack_top]=-1;
    array_stack_top--;
  }
  return;
}

/************************************************************
 *Function    : array_stack_display
 *Descritpion : display the full stack
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_stack_display()
{
  int i;
  printf("\n ----------- started displaying stack ------------\n");
  if(Is_array_stack_empty())
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_STACK_EMPTY);
  }
  else if(Is_array_stack_full())
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_STACK_OVERFLOW); 
  }
  else
  {
    printf("Number of elements in the stack is:%d\n",array_stack_top+1);
    for(i=0; i<= array_stack_top ; i++)
    {
        printf("%d ",array_stack[i]);
    }
  }
  
  printf("\n ----------- displaying stack finished ------------\n");
  return;
}

/************************************************************
 *Function    : array_stack_exit
 *Descritpion : exit from stack 
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_stack_exit()
{
    array_stack_top=-1;
    memset(array_stack, 0, ARRAY_SIZE);
	return;
}

/************************************************************
 *Function    : array_stack_autopush
 *Descritpion : automatically fill th stack till desired no of elements
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_stack_autopush()
{
  int num;
  printf("Enter the number of elements to be pushed to stack:");
  scanf("%d",&num);
  int i;
  srand(time(0));
  if(num < ARRAY_SIZE)
  {
    for(i=0; i<num; i++)
    {
      array_stack_top++;
      array_stack[array_stack_top]=rand()%ARRAY_RAND_NUM;
    }
  }
  else
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_SIZE_EXCEEDED);
  }
}

/************************************************************
 *Function    : array_stack_entry
 *Descritpion : stack entry function 
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_stack_entry()
{
  char ch;
  int data;
  while(1)
  {
    printf("Your stack operatons choice");
    printf("\n\ta:push operation\n\tb:auto push\n\td:pop operation\n");
    printf("\tp:display stack\n\te:delete whole stack\n");
    printf("\tz:to exit\n");
    
    scanf(" %c",&ch);
    
    switch(ch)  
    {
      case 'a':
              printf("Enter data to push to stack:");
              scanf("%d",&data);
              array_stack_push(data);
            break;
      case 'b':   
              array_stack_autopush();
              break;
      case 'd':
              data=array_stack_pop();
              printf("Popped out data from the stack is: %d\n",data);
            break;
      case 'p':
              array_stack_display();
            break;
      case 'e':
              array_stack_delete();
            break;
      case 'z':
              array_stack_exit();
              return;
      default:  
              printf("\nWrong input!! Please re-try\n");
            break;
    }
    
  }
}


// ********************************************************
//--------------------QUEUE RELATED FUNCTIONS--------------
// ********************************************************

/************************************************************
 *Function    : array_queue_autoenque
 *Descritpion : auto fill the queue with desired number of elements 
 * Parameters : void
 * Return     : void
 * ************************************************************/
void array_queue_autoenque()
{
  int num;
  printf("Enter the number of elements to be add to the queue:");
  scanf("%d",&num);
  int i;
  srand(time(0));
  if(num < ARRAY_SIZE)
  {
    for(i=0; i<num; i++)
    {
      if(array_queue_front == -1)
      {
        array_queue_front=0;
        array_queue_rear=0;
        array_queue[array_queue_rear]=rand()%ARRAY_RAND_NUM;
      }
      else
      {
        array_queue[++array_queue_rear]=rand()%ARRAY_RAND_NUM;
      }
    }
  }
  else
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_SIZE_EXCEEDED);
  }
}

/************************************************************
 *Function    : Is_array_queue_empty
 *Descritpion : function to chek if queue is empty  
 * Parameters :void
 * Return     : true if queue is empty else false
 * ************************************************************/
bool Is_array_queue_empty()
{
  if( (array_queue_front == array_queue_rear) && array_queue_rear == -1 )
  {
    return true;
  }
  else  
  return false;
}

/************************************************************
 *Function    : Is_array_queue_full
 *Descritpion : function to chek if queue is full 
 * Parameters :void
 * Return     : true if queue is full else false
 * ************************************************************/

bool Is_array_queue_full()
{
  if( array_queue_rear == ARRAY_SIZE-1 )
  return true;
  else return false;
}


/************************************************************
 *Function    : array_queue_enque
 *Descritpion : function to add a element in the queue 
 * Parameters :void
 * Return     : 0 if addition is successful else returns error code
 * ************************************************************/
void array_queue_enque(int data)
{
  if( Is_array_queue_full() )
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_QUEUE_FULL);
    return;
  }
  else if(array_queue_front == -1)
  {
    array_queue_front=0;
    array_queue_rear=0;
    array_queue[array_queue_rear]=data;
    return;
  }
  else
  {
      array_queue[++array_queue_rear]=data;
  }
  return;
}

/************************************************************
 *Function    : array_queue_deque
 *Descritpion : function to delete a element from the queue 
 * Parameters :void
 * Return     : 0 if addition is successful else returns error code
 * ************************************************************/
int array_queue_deque()
{
  if( Is_array_queue_empty() )
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_QUEUE_EMPTY);
    return -1;
  }
  else
  {
    int temp=array_queue[array_queue_front];
    array_queue_front++;
    return temp;
  }
  return 0;
}

/************************************************************
 *Function    : array_queue_deque
 *Descritpion : function to delete a element from the queue 
 * Parameters :void
 * Return     : 0 if addition is successful else returns error code
 * ************************************************************/
void array_queue_display()
{
printf("\n--------------- starting displaying the queue --------------- \n");
 if( Is_array_queue_empty() )
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_QUEUE_EMPTY);
    //return;
  }
  else
  {
    printf("Total number of elements in the queue:%d\n",array_queue_rear+1-array_queue_front);
    int i;
    for(i=array_queue_front; i<=array_queue_rear; i++)
    {
        printf("%d ",array_queue[i]);
    }
  }
printf("\n--------------- finished displaying the queue --------------- \n");
}

/************************************************************
 *Function    : array_queue_exit
 *Descritpion : exit function from queue operations
 * Parameters :void
 * Return     : 0 if addition is successful else returns error code
 * ************************************************************/
void array_queue_exit()
{
  array_queue_rear=-1;
  array_queue_front=-1;
  memset(array_queue, 0, ARRAY_SIZE);  
}


/************************************************************
 *Function    : array_queue_delete
 *Descritpion : delete the whole queue
 * Parameters : vois
 * Return     : void
 * ************************************************************/
void array_queue_delete()
{
  if( Is_array_queue_empty() )
  {
    ARRAY_ERROR_HANDLE(ERR_ARR_QUEUE_EMPTY);
  }
  else
  {
    printf("\nWarning!! You are going to delete the full array\n");
    int i;
    for(i= array_queue_front ; i<= array_queue_rear; i++)
    array_queue[i]=-1;
    array_queue_rear=-1;
    array_queue_front=-1;
  }
  
}

/************************************************************
 *Function    : array_queue_entry
 *Descritpion : stack entry function 
 * Parameters : vois
 * Return     : void
 * ************************************************************/
void array_queue_entry()
{
  char ch;
  int data;
  while(1)
  {
    printf("Your array queue operations choice");
    printf("\n\ta:enque operation\n\tb:auto fill the queue\n\td:deque operation\n");
    printf("\tp:display queue\n\te:delete whole stack\n");
    printf("\tz:to exit\n");
    
    scanf(" %c",&ch);
    
    switch(ch)  
    {
      case 'a':
              printf("Enter data to add to queue:");
              scanf("%d",&data);
              array_queue_enque(data);
            break;
      case 'b':
              array_queue_autoenque();
              break;
      case 'd':
              data=array_queue_deque();
              printf("Dequed data from the queue is: %d\n",data);
            break;
      case 'p':
              array_queue_display();
            break;
      case 'e':
              array_queue_delete();
            break;
      case 'z':
              array_queue_exit();
              return;
            break;
      default:  
              printf("\nWrong input!! Please re-try\n");
            break;
    }
    
  }
}

/************************************************************
 *Function    : array_main_entry
 *Descritpion : main entry function 
 * Parameters :pointer to an array and size of the array
 * Return     : void
 * ************************************************************/
void array_main_entry()
{
  char choice;
  int index;
  int size;
  int a[ARRAY_SIZE];
  while(1)
  {
      printf("\nYour array main choices:");
      printf("\n\ta:fill array\n\tb:print array\n\tc:print sum of even & odd elements\n");
      printf("\ti:print given index element\n\tx:refill the array\n");
      printf("\tf:find related operations\n\ts:sort related operations\n");
      printf("\tp:stack related operations\n\tq:queue related operations\n");
      printf("\tr:to remove duplicates from the array\n");
      printf("\td:to concatenate two arrays\n\tz:to exit\n");
      scanf(" %c",&choice);
      switch(choice)
      {
        case 'a': 
                printf("Enter the size of the array:");
                scanf("%d",&size);
                array_fill(a,size);
              break;
        case 'b':
                array_print(a,size);
              break;
        case 'c':
                array_print_Sum_Of_Even_odd_elements(a,size);
              break;
        case 'i':
		printf("Enter the index of element to print:");
		scanf("%d",&index);
                array_print_at_index_element(a,size,index);
              break;
        case 'd': 
              break;
        case 'f':
                array_find_functions_entry(a,size);
              break;
        case 's':
                array_sort_entry(a,size);
              break;
        case 'p':
                array_stack_entry();
              break;
        case 'q':
                array_queue_entry();
              break;
        case 'r':
                size=array_remove_duplicates(a,size);
              break;
        case 'x':
                size=array_refill(a);
              break;
        case 'z': 
                printf("\n----- Exiting from the main_entry function....\n");
                exit(0);
        default:  
                printf("\nWrong input!! Please re-try\n");
              break;

      }
    }
}

