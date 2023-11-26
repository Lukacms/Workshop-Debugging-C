#include <stdlib.h>
#include <string.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **dest = malloc(sizeof(char *) * (nb_rows + 1));

    dest[nb_rows] = NULL;
    for (int i = 0; i < nb_rows; i += 1) {
        dest[i] = malloc(sizeof(char) * (nb_cols + 1));
        dest[i] = memset(dest[i], '\0', nb_cols);
    }
    return dest;
}

char **load_2d_array(char const *file, int nb_rows, int nb_cols)
{
    char **dest = mem_alloc_2d_array(nb_rows, nb_cols);
    int count = 0;

    for (int pos_y = 0; pos_y < nb_rows + 1; pos_y++) {
        for (int pos_x = 0; pos_x < nb_cols; pos_x++) {
            dest[pos_y][pos_x] = file[count];
            count += 1;
        }
        count += 1;
    }
    return dest;
}
