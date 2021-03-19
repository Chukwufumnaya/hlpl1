#include "std_lib_facilities.h"

vector<int> strlen (vector <string> words){
    vector<int> length;
    for (auto n:words){
        length.push_back(n.length());
    }
    return length;
}
  


vector<string> sortlexico(vector <string> words){
    sort(words.begin(), words.end());
    return words;
}

int main(){
     
    
   vector <string> word_input;
    for(string words; cin >> words;)
        word_input.push_back(words);
    
    
    cout << "Length of words\n";
    vector<int> nin = strlen(word_input);
    for (int i = 0; i < word_input.size(); i++){
        cout << word_input[i] << " - Length is " << nin[i] << "\n";
    }


    cout << "Lexicologically sorted \n";
    vector<string> in = sortlexico(word_input);
    for (auto a: in) cout << a << "\n";

    return 0;
}