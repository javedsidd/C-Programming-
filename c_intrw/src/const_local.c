
int main() 
{
    const int a = 10; 
    int *b = &a; 
    printf("\nValue of constant is %d\n",a); 
    *b = 20; 
    printf("Value of constant is %d\n",a); 
    return 0; 
}
