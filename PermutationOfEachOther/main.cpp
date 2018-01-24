//
//  main.cpp
//  PermutationOfEachOther
//
//  Created by Indira Bobburi on 1/24/18.
//  Copyright © 2018 sjsu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isPermutation(string s, string t)
{
    if(s.length() != t.length())
        return false;
        
    int letters[128] = {0};
    
    for(int i=0; i< s.size(); i++)
    {
        letters[s.at(i)]++;
    }
    
    for(int i=0; i< t.size(); i++)
    {
        letters[t.at(i)]--;
        if(letters[t.at(i)] < 0)
            return false;
    }
    
    //below code is not required as we are checking the size of the array.
    /*for(int i=0; i<128; i++)
    {
        if(letters[i] != 0)
            return false;
    }*/
    
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << isPermutation("abcssdgg", "gbacsdsg");
    return 0;
}
