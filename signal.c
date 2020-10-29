#include "holberton.h"
/**
 * signal_read - continues shell as normal when Cc inputted
 * @out: sig
 * Return: void
 */

void signal_read(int out)
{
        (void) out;

        write(1, "\n", 1);
        write(STDOUT_FILENO, "Tshell$ ", 8);
        fflush(stdout);
}
