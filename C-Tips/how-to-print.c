/*
* Printing information to the console is handled by the printf() function
* printf stands for print(format)
* This means we use things called format specifiers to represent certain types of formatting
* These format specifiers are placed into the text we intend to print to represent variables
* Here are the specifiers:
* 
* ihar: %c, %C
* 
* int: %d, &i
* 
* float: %f
* 
* pointer: %p
* 
* string: %s
* 
* 
* 
*/



/*
There are many different ways to print in c. I wont be able to show all working so this file will be strictly commenting.

There two main formatted I/O (input/output) options:

printf(str *, declaration) and scanf(str *, declaration)
'printf' being the output and 'scanf' being the input.
Formatted inputs and outputs are way more user-friendly, so I tend to stick with those.

There are many other unformatted I/O like:
getch(), putchar(), gets() , puts(), etc. which are good for simple and efficient ways to gather information and output it.
However it must be remembered that this form is completely raw, so unless you know how to handle it, I do not recommend on any graded assignment.
*/

// Simple printf and scanf example
#include <stdio.h>

int main()
{
  int foo;
  scanf("%i", &foo);
  printf("%i\n", foo);
  // NOTE if your confused on the '&' and '\n' I recommend just checking the notes for this folder.
}
