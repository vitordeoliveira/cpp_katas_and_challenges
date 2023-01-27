#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         queue<int> q;
//         vector<vector<int>> res;

//         for(int i=0; i < numRows; i++){
//             vector<int> tmp;
//             if(i == 0){
//                 res.push_back({1});
//                 continue;
//             }

//             tmp.push_back(1);
//             while(!q.empty()){
//                 tmp.push_back(q.front());
//                 q.pop();
//             }
//             tmp.push_back(1);

//             for(auto j = tmp.begin(); j != tmp.end(); j++){
//                 if(j+1 == tmp.end()) break;
//                 q.push(*j+*(j+1));
//             }

//             res.push_back(tmp);
//             tmp.clear();
//         }

//         return res;
//     }
// };

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
            v[0].push_back(1);
        for(int i=1; i<numRows; i++){
            v[i].push_back(1);
            for(int j =1; j<i; j++){
                v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v[i].push_back(1);
        }
        return v;
    }
};

int main()
{

    Solution s;

    s.generate(4);
}