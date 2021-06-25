//prints n to 1 using recursion 
#include<stdio.h>
int func(int a)
{
        if (a==0)
        return 0;
        printf("%d ",a);
        return func(a-1);
}
int main()
{
	int n;
	printf("Enter nth number: ");
	scanf("%d",&n);
	func(n);
	return 0;
}
/*output
enter nth number: 5
54321*/