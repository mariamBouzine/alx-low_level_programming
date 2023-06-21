#include "main.h"
/**
 * prints the 9 times table, starting with 0.
 *
 * Return: * Return: Always 0 (Success)
 */
void times_table(void) {
    int i, j;

    for (i = 48; i <= 57; i++) {
        for (j = 48; j <= 57; j++) {
            _putchar(i * j);
        }
       _putchar("\n");
    }
}
