//
//  main.cpp
//  PermutationOfPalindrome
//
//  Created by Indira Bobburi on 1/24/18.
//  Copyright © 2018 sjsu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isPermutationOfPalindrome(string s)
{
    
    int table['z'-'a' +1] = {0};
    
    for(int i=0; i<s.size(); i++)
    {
        table[s.at(i)]++;
    }
    
    bool oddFound = false;
    for(int i=0; i<26; i++)
    {
        if(table[i]%2 == 1)
        {
            if(oddFound)
                return false;
            oddFound = true;
        }
    }
    
    return true;
}

/*Using bit vector*/
bool hasOneBit(int x)
{
    return ((x & (x-1)) == 0);
}

bool isPermutationAPalindrome(string s)
{
    int x = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        int index = s.at(i) - 'a';
        int mask = 1 << index;
        
        if((mask & x) == 0)
            x |= mask;
        else
            x &= ~mask;
    }
    
    return (x == 0) || hasOneBit(x);
}

int main(int argc, const char * argv[]) {
    if(isPermutationAPalindrome("asdfkjasdf"))
        cout << "Yes, string is a permutation of palindrome" << endl;
    else
        cout << "No, string is not a permutation of palindrome" << endl;
    return 0;
}
