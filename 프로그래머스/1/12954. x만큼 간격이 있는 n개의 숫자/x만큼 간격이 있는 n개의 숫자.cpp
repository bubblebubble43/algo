#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> list;
    for ( int i = 1; i <= n; i++){
        list.push_back(x*i);
    }
    return list;
}