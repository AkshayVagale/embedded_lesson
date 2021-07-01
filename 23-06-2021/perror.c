What is perror? 
The C library function void perror(const char *str) prints a descriptive error message to stderr. First the string str is printed, followed by a colon then a space.

Declaration for perror()function. 
void perror(const char *str)
Parameters
str − This is the C string containing a custom message to be printed before the error message itself.

Return Value
This function does not return any value.

Example
The following example shows the usage of perror() function.

#include <stdio.h>

int main () {
   FILE *fp;

   /* first rename if there is any file */
   rename("file.txt", "newfile.txt");

   /* now let's try to open same file */
   fp = fopen("file.txt", "r");
   if( fp == NULL ) {
      perror("Error: ");
      return(-1);
   }
   fclose(fp);
      
   return(0);
}
Let us compile and run the above program that will produce the following result because we are trying to open a file which does not exist −

Error: : No such file or directory