#include <iostream>
#include <string>
#include <vector>

extern "C" void external() {
    std::cout << "external" << '\n';
        std::vector<std::string> data;
        std::vector<std::string>::iterator itr;
        data.push_back("sub1");
        data.push_back("sub2");
        for(itr=data.begin(), data.end(); itr != data.end(); ++itr){
                data.erase(data.begin());
        }
}
