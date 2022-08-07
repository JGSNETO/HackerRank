// In this challenge, you will learn to implement the basic functionalities of pointers in C. 
// A pointer in C is a way to share a memory address among different contexts (primarily functions). 
// They are primarily used whenever a function needs to modify the content of a variable 
// that it does not own

// In order to access the memory address of a variable,val, prepend it with & sign. 
// For example, &val returns the memory address of .
// This memory address is assigned to a pointer and can be shared among various functions. 
// For example,  will assign the memory address of  to pointer . 
// To access the content of the memory to which the pointer points, prepend it with a *. 
// For example, *p will return the value reflected by  and any modification to it will be reflected at 
// the source ().
//Pointers in C - Hacker Rank Solution
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) 
{
    // Pointers in C - Hacker Rank Solution START
    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y); 
    // Pointers in C - Hacker Rank Solution END
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}