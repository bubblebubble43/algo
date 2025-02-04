#include <string>
#include <vector>

using namespace std;

    int gcd(int a, int b)
    {
        while(b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
        
    int lcm(int a, int b)
    {
        return a * b / gcd(a, b);
    }
  

vector<int> solution(int n, int m) {
    vector<int> answer;
    
  
    answer.push_back(gcd(m, n));
    answer.push_back(lcm(m, n));
    
    return answer;
}