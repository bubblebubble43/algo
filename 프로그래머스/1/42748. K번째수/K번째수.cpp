#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    
    for(int x = 0; x < commands.size(); x++)
    {
        int i = commands[x][0];
        int j = commands[x][1];
        int k = commands[x][2];
        
        vector<int> temp(array.begin() + (i - 1), array.begin() + j);
    
        sort(temp.begin(), temp.end());
    
        answer.push_back(temp[k - 1]);
    }
        
    return answer;
}