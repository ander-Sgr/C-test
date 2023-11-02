#include <unistd.h>
#include <stdio.h>

int ft_check_spaces(char *str) {
    int i = 0;
    int j = 0;

    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
            || str[i] == '\r' || str[i] == '\f' || str[i] == '\b'))
    {
        i++; 
    }
    if(str[i] == 0){
        return(i);
    }
    

    
    return (i);
}

int ft_check_sign(char *str, int i) {
    int sign = 1; // Inicializa el signo como positivo
    int total_minus = 0;

    while(str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
        {
            total_minus++;
        }
        i++;

    }

    if (total_minus % 2 != 0) {
        sign = -1; // Cambia el signo en función de la paridad de los signos menos
    }

    return sign;   
}
int main(void)
{
    char *str = "000123";
    int pos;
    int sign;

    pos = ft_check_spaces(str);
    sign = ft_check_sign(str, pos);
    
    while (str[pos] != '\0')
    {
        write(1, &str[pos], 1);
        pos++;
    }
    printf("\n%d", sign);
}