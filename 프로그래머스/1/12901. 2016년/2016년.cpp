#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int answer = 0;
    int total_days = 0;
    
    for(int i = 0; i < (a - 1); i++)
    {
        total_days += month[i];
    }
    
    answer = (total_days + (b - 1)) % 7;
        
    return day[answer];
}