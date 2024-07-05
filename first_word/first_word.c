#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void first_word(char *str)
{
    int i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        i++;
    }
    while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        ft_putchar(str[i]);
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
        first_word(argv[1]);
    }
}