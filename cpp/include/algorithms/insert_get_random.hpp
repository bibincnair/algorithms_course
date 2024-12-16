
#include <unordered_map>
#include <random>
#include <vector>
using std::unordered_map;

namespace get_random {
class RandomizedSet
{

unordered_map<int, int> map;
public:
  RandomizedSet() {}

  bool insert(int val) {
    if (map.find(val) != map.end())
    {
      return false;
    }
    map[val] = val;
    return true;
  }

  bool remove(int val) {
    if (map.find(val) == map.end())
    {
      return false;
    }
    map.erase(val);
    return true;
  }

  int getRandom() {
    std::vector<int> keys;
    for (auto it = map.begin(); it != map.end(); ++it)
    {
      keys.push_back(it->first);
    }
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, keys.size() - 1);
    return keys[dis(gen)]; 
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
}// namespace get_random