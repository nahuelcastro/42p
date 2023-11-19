
#include <unistd.h>

int ft_len_str(char *str);

int ft_is_error(char *data)
{
    int i;
    int len;

    i = 0;
    len = ft_len_str(data);
    if (len != 31)
    {
        write(2, "Error | input must be 31 characters long\n", 42);
        write(2, "   16 numbers and 15 spaces :)\n", 31);
        return (1);
    }
    while (data[i] != '\0')
    {
        if (i % 2 == 0)
        {
            if (data[i] >= '1' && data[i] <= '4')
                i++;
            else
            {
                write(2, "Error | even positions must be a number between 1, 4\n", 53);
                return (1);
            }
        }
        else
        {
            if (data[i] == ' ')
                i++;
            else
            {
                write(2, "Error | odd positions must be a space\n", 39);
                return (1);
            }
        }
    }
    return (0);
}