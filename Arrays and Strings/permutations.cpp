//ask if the strings are case sensitive and whitespaces
//if case sensitive conver the strings tolowers(s[i]);
//if white spaces "continue" and don't check for length comparisons
bool permutation(string s1, string s2){
    if(s1.size() != s2.size())
        return false;
    map<char,int> m;
    for(int i=0;i<s1.size();i++){
        m[s1[i]]++;
        m[s2[i]]--;
    }
        
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second != 0)
            return false;
    }
    return true;
}


int main() {
    string s1 = "god    ";
    string s2 = "dog";
    bool result = permutation(s1,s2);
    cout<<result<<endl;
}