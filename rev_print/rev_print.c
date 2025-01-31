#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
void rev_print(char *str)
{
    int i = ft_strlen(str) - 1;

    while(i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        ft_putchar('\n');
    }
    else
    {
        rev_print(argv[1]);
        ft_putchar('\n');
    }
}