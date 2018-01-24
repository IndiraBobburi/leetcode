//
//  main.cpp
//  longest_substring
//
//  Created by Indira Bobburi on 12/5/17.
//  Copyright © 2017 sjsu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) 
    {
        if(s.size() == 0) 
            return 0;
        
        int start = 0, end = 1, size = 1;
        
        for(; end < s.size(); end++)
        {
            string f_str = s.substr(start, end-start);
            int found = f_str.find_last_of(s[end]);
            if(found != string::npos)
            {
                start += found+1;
            }
            else
            {
                size = max(size, end-start+1);
            }
        }
        
        return size;
    }

int main(int argc, const char * argv[]) 
{
    std::cout << lengthOfLongestSubstring("abbcdabcbaedbbb");
    return 0;
}
