/*
Day1
Count number of bits to be flipped to convert A to B.
*/

#include<iostream>
using namespace std;

int CountSetBit(int number)
{
    int count = 0;
    while(number)
    {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

int FlippedDigits(int a, int b)
{
    return CountSetBit(a^b);
}
int main()
{
   int a=10;
   int b=20;
   cout<<FlippedDigits(a,b)<<"\n"; 
}