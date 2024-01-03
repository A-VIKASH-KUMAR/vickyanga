#include <stdio.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// int findContentChildren(vector<int> &g, vector<int> &s)
// {
//     int content_child = 0;
//     int count = 0;
//     for (size_t i = 0; i < g.size(); i++)
//     {
//         // cout<< "i"<<i<<endl;
//         // cout<< "g"<<g[i]<<endl;
//         // cout<< "s"<<s[i]<<endl;

//         if (g[i] == s[i])
//         {
//             count = count + 1;
//             // cout << count << '\n';
//         }
//     }
//     cout << "content " << count << endl;
//     return count;
// }

class Solution
{
public:
     int findContentChildren(vector<int>& g, vector<int>& s) {
        //  int content_child = 0;
     int count = 0;
     sort(g.begin(), g.end());
     sort(s.begin(), s.end());
     int i =0;
         for (int j = 0; i < g.size() && j<s.size(); j++)
            {
                cout<< "i"<<i<<endl;
                cout<< "g"<<g[i]<<endl;
                cout<< "s"<<s[i]<<endl;

                if (g[i] <= s[j])
                {
                    i++;
                    // cout << count << '\n';
                }
            }
            cout  << "content " << i << endl;
            return i;
    //  if(s.size() < g.size()){
    //      for (int i = 0; i < s.size(); i++) 
    //         {
    //             cout<< "i"<<i<<endl;
    //             cout<< "g"<<g[i]<<endl;
    //             cout<< "s"<<s[i]<<endl;

    //             if (g[i] == s[i])
    //             {
    //                 count = count + 1;
    //                 // cout << count << '\n';
    //             }
    //         }
    //   if(s.size() == 1) {
    //     for(int i =0;i < g.size(); i++) {
    //         if(g[i] == s[0]) {
    //             count++;
    //         }
    //     }
    //   }
    //         cout  << "content " << count << endl;
    //         return count;
    //  }
        // return 0;    
}
};

int main()
{
    vector<int> greed;
    vector<int> *greedPointer = &greed;
    vector<int> size;
    vector<int> *sizePointer = &size;

    int vectorSize;

    cout << "please give greed vector size" << '\n';
    cin >> vectorSize;
    cout << "please give greed size" << '\n';
    for (int i = 0; i < vectorSize; i++)
    {
        int input;
        cin >> input;
        greed.push_back(input);
    }

    cout << "please give cookie size vector size" << '\n';
    cin >> vectorSize;
    cout << "please give size of cookies input" << '\n';
    for (int i = 0; i < vectorSize; i++)
    {
        int input;
        cin >> input;
        size.push_back(input);
    };
    cout << "greed size " << greed.size() << endl;
    Solution contentChildCount;
    int content_count = contentChildCount.findContentChildren(*greedPointer, *sizePointer);
    cout << "content count " << content_count << endl;
    return content_count;
};