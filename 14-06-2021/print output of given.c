//to execute, a=2, b=1, x(a++ && (!b) && b|| ++a);

#include <stdio.h>
int main()
{
    int a=2,b=1;
    int x;
    printf("%d",x=(a++ && (!b) && b|| ++a));
    return 0;
}

//*output
1
*//