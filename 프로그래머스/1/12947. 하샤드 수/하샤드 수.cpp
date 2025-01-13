#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    int sum = 0;
    int i = x;
    while(i > 0)
    {
        sum += i % 10;
        i /= 10;
    }
    
    if( x%sum == 0 )
    {
        answer = true;
    } else {
        answer = false;
    }
            
   return answer;
}