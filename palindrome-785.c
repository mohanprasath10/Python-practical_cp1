# clap1
#include <stdio.h>
int main()
{
    int n,reversed=0,remainder,original;
    printf("Enter an integer: ");
    scanf("%d",&n);
    original = n;
    // reversed integer is stored in reversed variable
    while(n!=0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    // palindrome if original and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    return 0;
}

// SAMPLE INPUT AND OUTPUT:

// Sample Input : Enter a integer: 55
// Sample Output: 55 is a palindrome.

// Sample Input : Enter a integer: 25
// Sample Output: 25 is not a palindrome.



