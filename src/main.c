#include <stddef.h>
#include <stdio.h>
#include <workshop.h>

int main(void)
{
    char **array = NULL;

    array = load_2d_array(line, 5, 4);
    for (int i = 0; array[i]; i++)
        printf("%s\n", array[i]);
    return 0;
}
