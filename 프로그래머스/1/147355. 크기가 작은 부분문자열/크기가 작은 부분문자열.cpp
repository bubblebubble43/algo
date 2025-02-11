#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string x = " ";
    
    for(int i = 0; i <= t.size()-p.size(); i++)
    {
        x = t.substr(i, p.size());
        
        if (x <= p)
        {
            answer++;
        }
    }
    
    return answer;
}