

char *ft_strinvert(char *str) //TODO ROMPE TODO
{
    int i;
    int j;
    char aux;

    i = 0;
    j = 7;
    while (i < j)
    {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
        i++;
        j--;
    }
    return (str);
}

int ft_len_str(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}