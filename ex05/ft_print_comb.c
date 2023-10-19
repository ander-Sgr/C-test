#include <unistd.h>

void ft_print_comb(void){
    for(int i = 0; i < 999; i++)
    {
        if(i / 1 != 0){
            write(1, &i, 1);
        }
    }
}

int main(void){
    ft_print_comb();
}