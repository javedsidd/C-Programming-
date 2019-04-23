#include <stdio.h>
const int a=10; 
int main() 
{ 
    int *b = &a; 
    printf("Value of constant is %d",a); 
    *b = 20; 
    printf("Value of constant is %d",a); 
    return 0; 
}
