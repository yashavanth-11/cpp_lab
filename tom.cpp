#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;
    cout<<"Length:" << s.length() << endl;
    cout<<"Uppercase:";
    for (char c : s)  cout << (char)toupper(c);
    cout<<endl;
    bool pal = true;
    for(size_t i=0, j=s.size()-1; i<j; i++, --j)
    if(s[i] != s[j]){
        pal = false;
        break;
    }
    cout << s<<(pal?"is":"is NOT")<<"a plindrome\n";
    size_t pos = s.find('a');
    if(pos i = string::npos) cout<<"'a' found at index "<< pos<< endl;
    else cout<<"'a' not found\n";
    return 0 
}
       
        
        
    
