#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "a?b$c.de$?.f.ghi";
    char dlim[] = ".?$";

    char* ptr = str;
    strtok(str,dlim);
    
    while(ptr != NULL){
        cout << ptr << endl;
        ptr = (NULL, str);
    }

    return 0;
}