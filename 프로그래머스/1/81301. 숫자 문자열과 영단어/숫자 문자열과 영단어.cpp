#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
        
    map < string, string > s_map
    {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
        {"eight", "8"}, {"nine", "9"}
    };
    
    string temp = "";
    string answer = "";
    
    for (int i = 0; i < s.size(); i++)
    {
        if ( '0' <= s[i] && s[i] <= '9')
        {
            answer += s[i];
        }
        else
        {
            temp += s[i];
            if (s_map.find(temp) != s_map.end())
            {
                answer += s_map[temp];
                temp = "";
            }
        }
    }
    
    return stoi(answer);
}