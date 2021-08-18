/*find factorial of a number entered by user by using recursion*/
#include <stdio.h>
int fact(int);
int main()
{
    int num; //num is acutual parameter
    printf("enter a number: ");
    scanf("%d", &num);
    printf("factorial of %d is %d.", num, fact(num)); // calling function
    return 0;
}
int fact(int n)
{

    if (n == 0) // base condition
    {
        return 1;
    }
    else
        return (n * fact(n - 1)); //recursive function
}
/*enter a number: 0
factorial of 0 is 1.*/
/*enter a number: 1
factorial of 1 is 1.*/
/*enter a number: 5
factorial of 5 is 120.*/