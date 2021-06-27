Write a simple c program to demonstrate inline function advantage over the macro.
answer

Before this lets understand some of the advantages over macro,
a) Inline functions provides flexiblity and benifits of modular programming 
b) It speeds up the program by avoiding function calling overhead 
c) In macros, no type checking such as incompatible operand, etc is done and thus use of macros can lead to errors in some cases. 

a simple c program to demonstrate inline function over the macro : 

macros c program

#include<stdio.h>
#define CUBE(b) b*b*b
int main()
{
     printf("%d", CUBE(1+2));
     return 0;
}


here in program the macro is expanded as CUBE(1+2)  === 1+2*1+2*1+2 which is equal to 7 [correct but unexpected result]


inline c program 

#include<stdio.h>
int cube(int a)
{
     return a*a*a;
}
int main()
{
    printf("%d", cube(1+2));
    return 0;
}

in short
Macros are pre-processed which means that all the macros would be processed before program compiles. However, functions are not preprocessed but compiled.

here, CUBE(1+2)  === (1+2)*(1+2)*(1+2) which is equal to 27 [correct and expected result]
