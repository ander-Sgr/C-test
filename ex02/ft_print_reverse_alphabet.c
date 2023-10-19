#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int a = 97;
    int z = 122;

    for(int i = 122; i >= 97; i--){
        write(1, &i, 1);
    }
}

int main(void){
    ft_print_reverse_alphabet();
    return 0;
}