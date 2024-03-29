#include "NumClass.h"
    
int RecursiveNumDigit(int n) {
    if (n == 0)
        return 0;

    return 1 + RecursiveNumDigit(n/10);
}

int RecursiveisArmstrong(int n, int t) {
    if (n == 0)
        return 0;

    int tmp=1;
    for (int i = 0; i < t; i++)
        tmp*=(n%10);
    
    return tmp + RecursiveisArmstrong(n/10, t);
}

int isArmstrong(int n){
    return (n == RecursiveisArmstrong(n, RecursiveNumDigit(n)));
}

int reverseRecusive(int n, int sum) {
    if (n == 0)
        return sum;

    sum = (n%10) + (sum*10);

    return reverseRecusive(n/10, sum);
}

int isPalindrome(int n) {
    return (n == reverseRecusive(n, 0));
}
