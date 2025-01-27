#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; i++)
    {
        int count = 0;
        for (int f = 1; f <= i; f++)
        {
            if(i % f == 0)
            {
                count++;
            }            
        }
        if (count % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}