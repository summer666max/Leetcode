#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int row = strs.size();
        int col = strs[0].size();
        for (int i = 0; i < col; ++i)                      //ѭ�����бȽ�
        {
            for (int j = 0; j < row - 1; ++j)
            {
                if (strs[j][i] > strs[j + 1][i])
                {
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};
