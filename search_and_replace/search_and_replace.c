#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void search_and_replace(char *str, char find, char replace)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == find)
        {
            ft_putchar(replace);
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        ft_putchar('\n');
        return 1;
    }
    if (argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1, "\n", 1);
		return 0;
	}
    char *str = argv[1];
    char find = argv[2][0];
    char replace = argv[3][0];

    search_and_replace(str, find, replace);

    return 0;
}