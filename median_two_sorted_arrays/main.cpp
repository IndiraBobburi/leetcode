//
//  main.cpp
//  median_two_sorted_arrays
//
//  Created by Indira Bobburi on 1/15/18.
//  Copyright © 2018 sjsu. All rights reserved.
//

#include <iostream>
#include <vector>

//O(m+n) solution
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        vector<int> final_vec;
        
        while(it1 != nums1.end() || it2 != nums2.end())
        {
            if(it1 != nums1.end() && it2 != nums2.end())
            {
                if(*it1 < *it2)
                {
                    final_vec.push_back(*it1);
                    it1++;
                }
                else if(*it1 > *it2)
                {
                    final_vec.push_back(*it2);
                    it2++;
                }
                else
                {
                    final_vec.push_back(*it1);
                    final_vec.push_back(*it2);
                    it1++;
                    it2++;
                }
            }
            else if(it2 == nums2.end())
            {
                while(it1 != nums1.end())
                {
                    final_vec.push_back(*it1);
                    it1++;  
                }
            }
            else
            {
                while(it2 != nums2.end())
                {
                    final_vec.push_back(*it2);
                    it2++;
                }
                
            }
        }
        
        int n = nums1.size();
        int m = nums2.size();
        int mid = (n+m)/2;
        
        if((n+m) % 2 == 1)
            return final_vec[mid];
        else
            return (double)(final_vec[mid] + final_vec[mid-1])/2;
    }

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
