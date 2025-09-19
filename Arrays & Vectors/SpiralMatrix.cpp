#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int r= matrix.size();
    int c=matrix[0].size();
    int srow=0, scol=0, erow=matrix.size()-1, ecol=matrix[0].size()-1;
    while(srow<=erow && scol<=ecol){
        for(int j=scol; j<=ecol; j++) {
            ans.push_back(matrix[srow][j]);
        }
        for(int i=srow+1; i<=erow; i++) {
            ans.push_back(matrix[i][ecol]);
        }
        for(int j=ecol-1; j>=scol; j--) {
            if(srow==erow){
                break;
            }
            ans.push_back(matrix[erow][j]);
        }
        for(int i=erow-1; i>=srow+1; i--) {
            if(scol==ecol){
                break;
            }
            ans.push_back(matrix[i][scol]);
        }
        srow++;scol++;
        erow--;ecol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; // output will be 6
    
    vector <int> result = spiralOrder(matrix);
    for(int val : result){
    cout << val << " "; 
    }
    return 0;
}