#include <string>

using namespace std;

string solution(string s, int n) 
{
    string answer = " ";
    
    for (int i = 0; i < s.size(); i++) 
    {
        if ('A' <= s[i] && s[i] <= 'Z') 
        {
            s[i] = (s[i] - 'A' + n) % 26 + 'A';
        }
        else if ('a' <= s[i] && s[i] <= 'z') 
        {
            s[i] = (s[i] - 'a' + n) % 26 + 'a';
        }
    }
    answer = s;
    
    return answer;
}
