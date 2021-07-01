Clearing bit using macro:
We use the bitwise AND operator (&) to clear a bit. x &= ~(1UL << pos); it will clear nth bit. You must invert the bit string with the bitwise NOT operator (~), then AND it.

//Macro to clear nth-bit
/* 
Set single bit at pos to '0' by generating a mask
in the proper bit location and Anding x with the mask. 
*/
#define CLEAR_BIT(x, pos) (x &= (~(1U<< pos)))

Setting bit using macro:
We use the bitwise OR operator (|) to set a bit. x |= (1U<< pos); it will set nth bit .

//Macro to set nth-bit
/* 
Set single bit at pos to '1' by generating a mask
in the proper bit location and ORing (|) x with the mask. 
*/
#define SET_BIT(x, pos) (x |= (1U << pos))


Toggling bit using macro (Macro to flip bit):
We use the bitwise XOR operator (^) to toggle a bit. x^= 1U << pos;  it will toggle nth bit .

//Macro to toggle nth-bit
/*
Set single bit at pos to '1' by generating a mask
in the proper bit location and ex-ORing x with the mask. 
*/
#define TOGGLE_BIT(x, pos) x ^= (1U<< pos)
 



Given a number N, the task is to set, clear and toggle the K-th bit of this number N.

Clearing a bit means that if K-th bit is 1, then clear it to 0 and if it is 0 then leave it unchanged.

Setting a bit means that if K-th bit is 0, then set it to 1 and if it is 1 then leave it unchanged.

Toggling a bit means that if K-th bit is 1, then change it to 0 and if it is 0 then change it to 1.


examples :

Input: N = 5, K = 1
Output: 
Setting Kth bit: 5
Clearing Kth bit: 4
Toggling Kth bit: 4
Explanation: 
5 is represented as 101 in binary
and has its first bit 1, so 
setting it will result in 101 i.e. 5.
clearing it will result in 100 i.e. 4.
toggling it will result in 100 i.e. 4.

Input: N = 7, K = 2
Output: 
Setting Kth bit: 7
Clearing Kth bit: 5
Toggling Kth bit: 5
Explanation: 
7 is represented as 111 in binary
and has its second bit 1, so 
setting it will result in 111 i.e. 7.
clearing it will result in 101 i.e. 5.
toggling it will result in 101 i.e. 5.