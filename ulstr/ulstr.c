#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
char to_uppercase(char c)
{
    return c + ('A' - 'a');
}

char to_lowecase(char c)
{
    return c - ('A' - 'a');
}

void ulstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ft_putchar(to_uppercase(str[i]));
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar(to_lowecase(str[i]));
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
    if(argc != 2)
    {
        ft_putchar('\n');
    }
    else
    {
        ulstr(argv[1]);
    }
}