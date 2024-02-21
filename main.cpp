#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    vector<vector<int>> matrix;
    int n = 5, res=0;
    for (int i = 0; i < n; i++)
    {
        matrix.push_back(vector<int>());
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i].push_back(rand() % 2);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
        res += count(matrix[i].begin(),matrix[i].end(),0);
    }
    cout<<"amount of 0: "<<res<<endl;

    return 0;
}