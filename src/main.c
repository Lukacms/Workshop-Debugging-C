#include <stddef.h>
#include <stdio.h>
#include <workshop.h>

/**
 * @brief Something is wrong is one of these two C files. Use the vscode
 * debugger to find the source of the problem.
 */
int main(void)
{
    char **array = NULL;

    array = load_2d_array(line, 5, 4);
    for (int i = 0; array[i]; i++)
        printf("%s\n", array[i]);
    return 0;
}
