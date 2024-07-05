#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int get_index(char c)
{
    int index = 1;
    char i = 'a';
    char b = 'A';
    if(c >= 'a' && c <= 'z')
    {
        while (c != i)
        {
            i++;
            index++;
        }
    }
    else if(c >= 'A' && c <= 'Z')
    {
        while (c != b)
        {
            b++;
            index++;
        }
    }
    return index;
    
}
void repeat_alpha(char *str)
{
    
    int i = 0;
    int repeated = 1;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            repeated = 1;
            int times = get_index(str[i]);
            while(repeated <= times)
            {
                ft_putchar(str[i]);
                repeated++;
            }
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
    if (argc > 1)
    {
        repeat_alpha(argv[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return 0;
}