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
      cout << nums.size()<< endl;
    //   sort(nums.begin(), nums.end());

      for (int i = 0; i < nums.size() -1; i++)
      {
         if (nums[i] == target - nums[i+1])
         {

            cout << "nums i"<<nums[i] << endl;
            result.push_back(i);
            result.push_back(i+1);
         } else if((nums[i] == target - nums[nums.size() - 1- i])) {
             result.push_back(i);
             result.push_back(nums.size() - 1- i);
         }

      };
      return result;
    }
};

int main()
{
   Solution two_sum;
   vector<int> nums = {2, 7, 11, 15};
   vector<int> *numsPointer = &nums;

   int target = 9;

   vector<int> result = two_sum.twoSum(*numsPointer, target);
   int vector_size = result.size();
   cout << "vector size"<<vector_size << endl;

   int result_array[vector_size];
   for (int i = 0; i < vector_size; ++i) {
    result_array[i] = result[i];
}
   // copy(result.begin(), result.end(), result_array)

   cout <<"result array " << *result_array << endl;
   return 0;
}