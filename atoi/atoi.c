#include <unistd.h>
#include <stdio.h>

my_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] -'0');
    }
    return result * sign;
    
}
int main()
{

    return 0;
}