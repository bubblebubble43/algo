#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    int size = numbers.size();
    for (int i = 0; i < size; i++){
        sum += numbers[i];
    }
    double answer = static_cast<double>(sum) / size;
    return answer;
}