#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    
    auto index = find(seoul.begin(), seoul.end(), "Kim");
    int i = index - seoul.begin();
    string answer = "김서방은 " + to_string(i) + "에 있다";
    
    return answer;
}