// Reverse a string using pointers:

#include <stdio.h>

void rev(char *str)
{
    char *r_ptr = str;
    while (*(r_ptr + 1) != '\0')
        r_ptr++;

    while (r_ptr > str)
    {
        char tmp = *r_ptr;
        *r_ptr-- = *str;
        *str++ = tmp;
    }
}

void main()
{
    char s[] = "Hello World!";
    rev(s);
    puts(s); // Prints !dlroW olleH
}
