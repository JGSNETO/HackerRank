/*
1. Objective
if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

if: This executes the body of bracketed code starting with  if  evaluates to true.

if (condition) {
    statement1;
    ...
}

if - else: This executes the body of bracketed code starting with statement1 if condition evaluates to true, or it executes the body of code starting with statement2 if condition evaluates to false. Note that only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}

if - else if - else: In this structure, dependent statements are chained together and the condition for each statement is only checked if all prior conditions in the chain are evaluated to false. Once a condition evaluates to true, the bracketed code associated with 
that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each condition in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}

Task

Given a positive integer denoting , do the following:

If 1<= n <= 9 print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2, etc.).
If n > 9, greater than 9 print Greater than 9.
Input Format

The first line contains a single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.
*/

#include <stdio.h> //Standard input/output. e.g: printf(), scanf()
#include <math.h> //Math functions. e.g: sqrt(), sin(), cos()
#include <limits.h>  //Limits of integer types. e.g: INT_MIN, INT_MAX
#include <stdbool.h> // C tradionally did nothave a dedicated bool type. 
#include <stddef.h> // Provides several fundamental types and macros used throughout C. e.g: size_t, NULL, offsetof(), 
#include <stdint.h> // This is one of the most important headers for embedded systems and automotive software. It provides integer types with a specified number of bits. e.g: uint8_t, uint16_t, int8_t, int16_t. 
#include <stdlib.h> // General utilities. It provides many fundamental utilities. e.g: malloc(), calloc(), realloc(), free()
#include <string.h> // String and memory. It provides functions for amnipulation strings and blocks of memory. e.g: strlen(), strcpy(), strncpy().

char* readline();


int main(){

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') {

        exit(EXIT_FAILURE);
    }

    // Write your code here
    if (n == 1) {
    printf("one");
    } else if (n == 2) {
        printf("two");
    } else if (n == 3) {
        printf("three");
    } else if (n == 4) {
        printf("four");
    } else if (n == 5) {
        printf("five");
    } else if (n == 6) {
        printf("six");
    } else if (n == 7) {
        printf("seven");
    } else if (n == 8) {
        printf("eight");
    } else if (n == 9) {
        printf("nine");
    } else {
        printf("Greater than 9");
    }

    return 0;
}

char* readline() {

    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while(true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if(!line){
            break;
        }

        data_length += strlen(cursor);
        
        if(data_length < alloc_length -1 || data[data_length -1] == '\n'){
            break;
        }

        size_t  new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if(!data) {
            break;
        }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

/*
 * ============================================================
 * C PROGRAM TEMPLATE — COMMON HEADERS & INPUT
 * ============================================================
 *
 * HEADERS
 * ------------------------------------------------------------
 * <assert.h>   → Debugging assertions
 *                assert(condition);
 *
 * <limits.h>   → Limits of integer types
 *                INT_MAX, INT_MIN, CHAR_MAX, ...
 *
 * <math.h>     → Mathematical functions
 *                sqrt(), pow(), sin(), cos(), fabs(), ...
 *
 * <stdbool.h>  → Boolean type and values
 *                bool, true, false
 *
 * <stddef.h>   → Fundamental types and utilities
 *                size_t, ptrdiff_t, NULL, offsetof()
 *
 * <stdint.h>   → Fixed-width integer types
 *                int8_t, uint8_t, int16_t, uint32_t, ...
 *
 * <stdio.h>    → Input / Output
 *                printf(), scanf(), fgets(), getchar(), ...
 *
 * <stdlib.h>   → General utilities and memory
 *                malloc(), calloc(), realloc(), free()
 *                strtol(), atoi(), abs(), exit(), ...
 *
 * <string.h>   → String and memory manipulation
 *                strlen(), strcpy(), strcmp()
 *                memcpy(), memset(), memcmp(), ...
 *
 *
 * INPUT TEMPLATE
 * ------------------------------------------------------------
 *
 * char* readline();
 *
 * char* n_endptr;
 * char* n_str = readline();
 * int n = strtol(n_str, &n_endptr, 10);
 *
 * strtol() converts a string → integer.
 *
 *     "123"  → 123
 *     "-10"  → -10
 *
 * n_endptr points to the first character that could not
 * be converted.
 *
 * Validation:
 *
 * if (n_endptr == n_str || *n_endptr != '\0')
 *     exit(EXIT_FAILURE);
 *
 *     n_endptr == n_str
 *         → nothing was converted
 *
 *     *n_endptr != '\0'
 *         → extra invalid characters remain
 *
 *
 * readline()
 * ------------------------------------------------------------
 *
 * Reads a complete line from stdin, even if the line is
 * longer than the initial buffer.
 *
 * 1. Allocate an initial buffer:
 *
 *     malloc(1024)
 *
 * 2. Read input using:
 *
 *     fgets()
 *
 * 3. If the buffer is too small:
 *
 *     realloc()
 *
 *    The buffer size is doubled:
 *
 *     alloc_length << 1
 *        ≈ alloc_length * 2
 *
 * 4. Continue reading until:
 *
 *     - '\n' is found
 *     - EOF is reached
 *
 * 5. Remove the trailing '\n':
 *
 *     data[data_length - 1] = '\0';
 *
 * 6. Resize the buffer to the actual data size:
 *
 *     realloc(data, data_length);
 *
 *
 * MEMORY FUNCTIONS USED
 * ------------------------------------------------------------
 *
 * malloc()   → Allocate memory
 * realloc()  → Resize allocated memory
 * free()     → Release allocated memory
 *
 *
 * IMPORTANT
 * ------------------------------------------------------------
 *
 * readline() returns dynamically allocated memory.
 * Therefore, after using it, the caller should normally call:
 *
 *     free(n_str);
 *
 * to avoid a memory leak.
 *
 * ============================================================
 */