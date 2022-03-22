#ifndef MAIN_H

#define MAIN_H

/**

* Includes function prototypes

* for the directory
* 0x05 pointers arrays and strings
*/
int _putchar(char c);

/*updates the value of a parameter*/
void reset_to_98(int *n);

/* swaps values of 2 integers*/
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* prints a string followed by a new line */
void _puts(char *str);

/* prints a string in reverse */
void print_rev(char *s);

/* reverses a string */
void rev_string(char *s);

/* prints every other character of a string */
void puts2(char *str);

/* prints half of a string */
void puts_half(char *str);

/* prints elements of an array */
void print_array(int *a, int n);

#endif
