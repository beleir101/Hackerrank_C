#include <stdio.h>
#include <stdlib.h>

/**
 * max_of_four - functiom
 * Description: This will compare four numbers and return the biggest number of all dont think its the prefect one tho
 *
 * Return: The largest of four numbers
 */


int max_of_four(int a, int b, int c, int d)
{
    int p = 0;
    if (a >= b)
    {
        if (a>= c)
        {
            if (a >= d)
            {
                p = a;
            }
            else if (d > a)
            {
                p = d;
            }
        }
        else if(a < c )
        {
            if (c >= d)
            {
                p = c;
            }
            else 
            {
                p = d;    
            }
        }
    }
    else if (b > a)
    {
        if (b >= c)
        {
            if (b >= d)
            {
                p = b;
            }
            else if (d > b)
            {
                p = d;
            }
        }
        else if (c > b) 
        {
                if (c >= d)
                {
                    p = c;
                }
                else if (d >= c)
                {
                    p = d;
                }
        }
    }
    
    return (p);
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
