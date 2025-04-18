#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food)
{
   string left = "";
   
    for (int i = 1; i < food.size(); i++)
    {
        int count = food[i] / 2;
        for (int j = 0; j < count; j++)
        {
            left += to_string(i);
        }
    }
    
    string right = left;
    reverse(right.begin(), right.end());

    return left + "0" + right;
}