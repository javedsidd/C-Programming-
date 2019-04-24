#include <stdio.h>

int main()
{
    char arr[]="abcdabtghaak";

    int i,j;

  printf("Before removing duplicates %s\n",arr);  

    for(i=0; arr[i]!='\0'; i++)
    {

      j=i+1;
      int k=i;
    if(arr[j] == arr[k]){ 
     while((arr[k] == arr[j]) && (arr[j]!='\0'))
      { 
          arr[k++]=arr[j];
          j++;
      }
    }}

  printf("After  removing duplicates %s\n",arr);  

}
