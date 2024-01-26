#include <cstring> 
#include <string> 
#include <iostream> 

int main() 
{ 
    std::string s;
    std::cin >> s; 

    const int length = s.length(); 
    int total = length; 
    int repeated = 0;

    char* char_array = new char[length + 1]; 
    strcpy(char_array, s.c_str()); 

    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(char_array[i] == char_array[j]) {
                repeated += 1;
            }
        }
    }

    int distinct = total - repeated; 
    if (distinct % 2 == 0)
        std::cout << "CHAT WITH HER!";
    else
        std::cout << "IGNORE HIM!";

    return 0; 
}
