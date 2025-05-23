#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    int answer = 0;
    int total = 0;
    int apple = 0;
    
    sort(score.begin(), score.end(), greater<int>());
    
    for(int i = 0; i < score.size(); i++)
    {
        apple++;
        if(apple == m)
        {
            total += (score[i] * m);
            apple = 0;
        }
    }
    answer = total;
    
    return answer;
}