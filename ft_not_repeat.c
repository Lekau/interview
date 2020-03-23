/*
The objective of this program is to look for snd print the first letter that doesnt repeat in a string 
given when we run the program. 
*/
#include <unistd.h>
void ft_putchar(char k)
{
    write(1, &k, 1);
}

int main (int count, char **vect)
{
    if (count == 2)
    {
        int a;
        int b;
        int repeaters;
        
        a = 0;
        b = 0;
        repeaters = 0;
        while(vect[1][a] != '\0')
        {
            repeaters = 0;
            b = 0;

            while (vect[1][b] != '\0')
            {
                if (a != b)
                {
                    if (vect[1][a] == vect[1][b])
                        repeaters++;
                }
                b++;
            }
            if (repeaters == 0)
            {
                ft_putchar(vect[1][a]);
                break;
            }
            else
            {
                a++;
            }
        } 
    }
    ft_putchar('\n');
    return (0);
}