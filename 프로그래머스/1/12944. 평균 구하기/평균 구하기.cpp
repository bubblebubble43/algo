#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); i++ ){
        sum += arr[i];
    }
    double avg = sum / arr.size();
    if (avg == static_cast<int>(avg)){
        return static_cast<int>(avg);
    }
    return avg;
}