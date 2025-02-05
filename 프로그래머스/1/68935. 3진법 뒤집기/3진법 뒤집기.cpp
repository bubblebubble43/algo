#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> x;
    int base = 1;
    
    while(n > 0)
    {
        x.push_back(n % 3);
        n /= 3;
    }
    
    for(int i = 0; i < x.size(); i++)
    {
        answer += x[x.size()-i-1] * base;
        base *= 3;
    }
    
    return answer;
}