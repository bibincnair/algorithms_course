#include <string>
#include <vector>
#include <string_view>
#include <ranges>
using std::string;
using std::vector;
using std::string_view;

namespace simplify_path {
class Solution
{
public:
  string simplifyPath(string path)
  {
    std::vector<string_view> stack;
    for(const auto& component_range: std::views::split(path, '/')){
        auto begin_it = component_range.begin();
        auto end_it   = component_range.end();
        string_view component(&*begin_it,
                             static_cast<string_view::size_type>(end_it - begin_it));
        if(component == "" || component == "."){
            continue;
        }
        if(component == ".."){
            if(!stack.empty()){
                stack.pop_back();
            }
        }
        else{
            stack.push_back(component);
        }
    }
    string output;
    if(!stack.empty()){
        for(auto& comp: stack){
            output += "/" + string(comp);
        }
    }
    else{
        output = "/";
    }
    return output;
  }
};
}// namespace simplify_path