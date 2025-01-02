#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    for (auto it : arr){
        sum += it;
    }
    
    return sum / arr.size();
}