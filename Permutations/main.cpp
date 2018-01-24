//
//  main.cpp
//  string_permutations
//
//  Created by Indira Bobburi on 12/6/17.
//  Copyright © 2017 sjsu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void permutation(string s, string prefix)
{
    if(s.length() == 0)
    {
        cout << prefix << endl;
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            string rem = s.substr(0,i) + s.substr(i+1);
            permutation(rem, prefix + s.substr(i,1));
        }
    }
}

void permutations(string s)
{
    permutation(s, "");
}


int main(int argc, const char * argv[]) 
{
    permutations("abcde");
    return 0;
}

