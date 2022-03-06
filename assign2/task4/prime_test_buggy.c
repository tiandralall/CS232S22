#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void get_valid_number(int *n);
bool is_prime(int x);
int main()
{
    int n;
    get_valid_number(&n); 
    while (n!=-1) { 
        if (is_prime(n))
        {
            printf("%d is a prime number!\n", n);
        }
        else
        {
            printf("%d is not a prime number!\n", n);
        }
        
        get_valid_number(&n);
    }
    return 0;
}

bool is_prime(int n)
{
    bool flag=true;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag=false;
            break;
        }
    }
    return flag;

}

void get_valid_number(int * n)
{
    do{
   printf("Please enter an integer greater than 2 to test its primality, enter -1 to exit \n");
   scanf("%d", n);
   }while (*n <= 2 && *n != -1);
}

