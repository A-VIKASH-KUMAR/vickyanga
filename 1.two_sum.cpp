#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
      unordered_map<int, int> umap;
      cout << nums.size()<< endl;
    //   sort(nums.begin(), nums.end());

      for (int i = 0; i < nums.size(); i++)
      {
         int complement = target - nums[i];
         cout << "complement "<<complement << endl;
         if (umap.count(complement))
         {

            cout << "nums i"<<nums[i] << endl;
            cout << "umap"<<umap[i] << endl;
            return {umap[complement], i};
            // result.push_back(i);
            // result.push_back(i+1);
         } 
            umap[nums[i]] = i;
         }
         return {};
      }
      
};

int main()
{
   Solution two_sum;
   vector<int> nums = {2, 11, 7, 15};
   vector<int> *numsPointer = &nums;

   int target = 9;

   vector<int> result = two_sum.twoSum(*numsPointer, target);
   int vector_size = result.size();
   cout << "vector size"<<vector_size << endl;

   int result_array[vector_size];
   for (int i = 0; i < vector_size; ++i) {
    result_array[i] = result[i];
    cout << "result" <<result[i] <<endl;
}
   // copy(result.begin(), result.end(), result_array)

   cout <<"result array " << *result_array << endl;
   return 0;
}