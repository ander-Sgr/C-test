#include <unistd.h>

void ft_swap(char *str1, char *str2)
{
    char *temp;

    temp = *str1;
    *str1 = *str2;
    *str2 = *temp;
}

int stcmp(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i])
        i++;
    }
    if (str1[i] == str2[i])
    {
        return (0);
    }
    return (str1[i] - str2[i]);
}

int main(int argc, char **argv){
    int i;
    int j;

    i = 0;
    j = 0;

    while (i < argc)
    {
        while (argv[i][j] != '\0')
        {

        }
        i++;
    }
}
