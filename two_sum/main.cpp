//
//  main.cpp
//  two_sum
//
//  Created by Indira Bobburi on 1/14/18.
//  Copyright © 2018 sjsu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> hashTable; //number, index
    
    for(int i=0; i<nums.size(); i++)
    {
        int complement = target - nums[i];
        unordered_map<int, int>::iterator it = hashTable.find(complement);
        if(it != hashTable.end())
        {
            vector<int> res;
            res.push_back(it->second);
            res.push_back(i);
            return res;
        }
        hashTable[nums[i]] = i;
    }
    return {-1, -1};
}

int main(int argc, const char * argv[]) 
{
    std::vector<int> v = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> ans = twoSum(v, target);
    
    for(int i =0; i< ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    return 0;
}
