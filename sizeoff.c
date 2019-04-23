#include <stdio.h>
 
#define SIZEOF(X)                            \
    ({                                       \
        __typeof__(X) x;                     \
        ((char *)(&x + 1) - (char *)&x);     \
    })
         
 
int main(void)
{
    struct s {
        int x;
        float p;
        int y;
    };

	int a;
	char c;
    printf("struct s: %ld\n", SIZEOF(struct s));
    printf("int :%ld\n", SIZEOF(int));
    printf("int* :%ld\n", SIZEOF(int *));
    printf("char :%ld\n", SIZEOF(char ));
    printf("int a: %ld\n", SIZEOF(a));
    printf("char c:%ld\n", SIZEOF(c));

    return 0;
}
