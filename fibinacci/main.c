#include <stdio.h>
#include <stdlib.h>

int fibbi(int n) {
int fib[n];

if (n == 0) {
    return 0;
} else if (n ==1) {
    return 1;
    }
return fibbi(n-2) + fibbi(n -1);
}

int main()
{

count = 5;
fibbi(count);



}
