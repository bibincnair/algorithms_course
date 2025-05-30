#include <cstddef>
#include <string>
#include <vector>
using std::string;
using std::vector;

namespace ransom_note {
class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine) {

    vector<int> magazine_count(26, 0);
    for(const auto &ch: magazine){
        magazine_count[static_cast<size_t>(ch -  'a')]++;
    }
    for(const auto& ch: ransomNote){
        auto idx = static_cast<size_t>(ch - 'a');
        if(magazine_count[idx] > 0){
            magazine_count[idx]--;
        }
        else{
            return false;
        }
    }
    return true;
  }
};
}// namespace ransom_note