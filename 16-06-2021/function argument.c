/*4. How the arguments passed or pushed to other function and how it assigns the value to arguments. Explain using diagram for below example */
int main()
{
  while(1)
  {
  	data_acq(int a, int b, int c)
  }
}

void data_acq(int x, int y, int z)
{
	...	
}

/*answer 
	There are two ways to pass arguments to a function,
a) Pass(or call) by Value- it means that a copy of the data is made and stored by way of the name of the parameter.
OR here values of actual parameters will be copied to formal parameters and these teo different parameters store values in different locations.(local to the function)

b) Pass(or call) by Reference- it refers to the original data in the calling function.
OR here both actual and formal parameters refers to same memory location. therefore any changes made to the formal parameters will get changed to actual parameters(here instead of passing values we pass addresse.)

above example is a type of pass by reference 
here we pass adresses not value*/