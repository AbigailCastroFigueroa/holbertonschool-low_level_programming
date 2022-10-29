# Bit Manipulation

## Description
We learn about how to manipulate bits with the use of the bitwise
operators.

### Requirements for this project:
- Allowed editors are: vi, vim and emacs.
- Global variables are not allowed.
- The only C standard library function allowed are malloc, free and exit.
- The header file should be include guarded.
- All files will be compiled on Ubuntu 20.04 LTS using gcc as follow:
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89

### Mandatory tasks:
- 0-binary_to_uint - convert a binary number to an unsigned int.
> prototype used: unsigned int binary_to_uint(const char \*b);
- 1-print_binary - prints the binary representation of a number.
> prototype used: void print_binary(unsigned long int n);
- 2-get_bit - return the value of bit at a given index.
> prototype used: int get_bit(unsigned long int n, unsigned int index);
- 3-set_bit - set the value of a bit to 1 at a given index.
> prototype used: int set_bit(unsigned long int \*n, unsigned int index);
- 4-clear_bit - set the value of a bit to o at a given index.
> prototype used: int clear_bit(unsigned long int \*n, unsigned int index);
- 5-flip_bits - return the number of bits you would need to flip to
    switch from one number to another.
> prototype used: unsigned int flip_bits(unsigned long int n, unsigned long int m);


