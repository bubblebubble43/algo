#include <string>
#include <vector>
#include <set>


using namespace std;

vector<int> solution(vector<int> numbers)
{
    set<int> n;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            n.insert(numbers[i] + numbers[j]);
        }
    }
    vector<int> answer (n.begin(), n.end());
        
    return answer;
}