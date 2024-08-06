
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {

    // Initialize start and end pointers
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters while start is less than end
    while (start < end) {

        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers
        start++;
        end--;
    }
}

int main()
{
    char str[100] = "Hello World";
    printf("Original String: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

