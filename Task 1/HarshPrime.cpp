#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkPrime(int x)
{
    for(int i=2;i<sqrt(x);i++)     //using the concept that prime number n can be check by dividing it with the
    {                              //prime numbers before square root of n
        if(x%i==0)
            return false;
    }
    return true;
}
int nextPrime(int x)               //find the next prime of the given prime number
{
    while(1)
        if(checkPrime(++x))        //checking for the prime number by incrementing x value
            return x;
}
int main() {
    int n,x;
    cin>>n>>x;
    int i=2,j;
    int count=0;
    while(i<=n)
    {
        j=nextPrime(i);            //calculated value of next prime number after i
        if(i+j+1>n)
            break;
        else if(checkPrime(i+j+1))   //If a prime number is Special prime number,
                                     // then we increments the  value of count.
        count++;
        i=j;
    }
    if(count>=x)                      // If at least x Special prime numbers are present, then we return 1(YES).
                                      // else we return 0(NO).
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
