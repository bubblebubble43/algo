#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string answer = "Yes";
    int index1 = 0;
    int index2 = 0;
    
    for (int i = 0; i < goal.size(); i++)
    {
        if (index1 < cards1.size() && cards1[index1] == goal[i])
        {
            index1++;
        }
        else if (index2 < cards2.size() && cards2[index2] == goal[i])
        {
            index2++;
        }
        else
        {
            answer = "No";
        }
    }
    
    
    return answer;
}