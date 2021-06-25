//1 to n using recursion

#include<stdio.h>
int func(int a, int i)
{	
        if (a==i+1)
        return 0;
        printf("%d ",a);
        return func(a+1,i);
}
int main()
{
        int n,i=1;
        printf("Enter nth number: ");
        scanf("%d",&n);
        func(i,n);
        return 0;
}
/*output
enter nth number: 5
12345*/