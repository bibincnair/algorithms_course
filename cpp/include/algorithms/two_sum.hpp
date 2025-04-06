#include <iterator>
#include <vector>

using std::vector;

namespace two_space {
class Solution
{
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    vector<int> output;
    auto fwd_iter = numbers.begin();
    auto rev_iter = std::prev(numbers.end());

    while(fwd_iter < rev_iter){
        auto sum = *fwd_iter + *rev_iter;
        if(sum == target){
            output.push_back(std::distance(numbers.begin(), fwd_iter) + 1);
            output.push_back(std::distance(numbers.begin(), rev_iter) + 1);
            return output;
        }
        else if(sum < target){
            ++fwd_iter;
        }
        else{
            --rev_iter;
        }
    }
    return output;
  }
};
}// namespace two_space