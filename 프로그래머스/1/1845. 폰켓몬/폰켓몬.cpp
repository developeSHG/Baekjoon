#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    // 24.10.12
    int answer = nums.size() / 2;
    set<int> no_dupl( nums.begin(), nums.end() ); 
    
    return answer < no_dupl.size() ? answer : no_dupl.size();
}