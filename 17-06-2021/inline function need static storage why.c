Why inline functions needs static storage?
answer
	The static storage class instructs the compiler to keep a local variable
     in existence during the life-time of the program instead of creating and
      destroying it 	each time it comes into and goes out of scope. 
      Therefore, making local variables static allows them to maintain their
       values between function calls. static 		
       inline has the same effects in all C dialects and C++.
        It will emit a locally visible (out-of-line copy of the) function if
         required.
         " If the storage class is 	static, the identifier has internal
          linkage and the inline definition is invisible in other translation 
         units.

