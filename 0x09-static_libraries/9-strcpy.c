#include <string.h>

char *_strcpy(char *dest, char *src) {
	 char *original_dest = dest; // Keeping a copy of the original destination pointer

    // Copy characters from src to dest until reaching the end of src ('\0')
    while (*src != '\0') {
        *dest = *src; // Copy character
        dest++;      // Move dest pointer to the next position
        src++;       // Move src pointer to the next position
    }

    *dest = '\0'; // Append the null character to the end of dest to terminate the string

    return original_dest; // Return the original destination pointer
}
