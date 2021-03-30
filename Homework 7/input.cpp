#include "std_lib_facilities.h"

int main() {
    try{

    string file = "nen.txt";
    ifstream ist{ file };
    
    if (!ist) {
        error("Cannot open file ", file);
       
    }

    vector<int> numbers;
    
    while (true) {
        
        int number;
        ist >> number;
        
        if (ist.bad()) {
           error("Error while reading file ", file);
            
        }
        
        if (ist.fail()) {
            ist.clear();
            string word;
            ist >> word;
            continue;
        }
        
        numbers.push_back(number);
        
        if (ist.eof()) {
            break;
        }
    }

    int sum = 0;
    for (int x : numbers) 
        sum += x;
    
     cout << sum << endl;
      return 0;
}

catch (exception& e){
        cout << e.what() << endl;
       
        return 1;
    }
    
    
}