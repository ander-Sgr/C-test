#include <unistd.h>

void ft_print_alphabet(void)
{
    int a = 97;
    int z = 122;
    for (int i = a ; i <= z; i++)
    {
        write(1, &i, 1);
    }
    
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}