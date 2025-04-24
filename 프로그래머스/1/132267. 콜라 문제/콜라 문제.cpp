#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    //a = b를 교환받기 위해 필요한 빈병 수
    //b = 교환 해주는 콜라 수
    //n = 가지고 있는 빈병 수
    int answer = 0;
    int exchange = 0;

    while(n >= a)
    {
        exchange = n / a * b;
        answer += exchange;
        n = exchange + (n % a);
    }
    
    
    return answer;
}