#include<stdio.h>

int old = 5;
extern int new_var __attribute__((alias("old")));  // Alias 'new_var' to 'old'

int main()
{
    printf("value of new name is: %d\n", new_var);  // Access 'new_var', which refers to 'old'
    return 0;
}

