#include <iostream>
#include <string>

int main() {
    std::string str = "   hello my friend     ";
    
    size_t b = 0, e = 0;
    for (; str[b] == ' '; b++);
    for (; str[str.size()-1 - e] == ' '; e++);

    std::string res;
    if (str.begin() + b < str.end() - e) 
        res = std::string(str.begin() + b, str.end() - e);

    return 0;
}
