#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        vector<vector<int>> ans;
        map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
      
        for(auto &p: mp){
            ans.push_back({p.first, p.second});
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};  // sample input

    vector<vector<int>> result = sol.countFreq(arr);

    cout << "Element -> Frequency\n";
    for(auto &row : result){
        cout << row[0] << " -> " << row[1] << endl;
    }

    return 0;
}
