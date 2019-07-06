int getCharIndex(char c){
    int idx = -1;
    if(c >='a' && c <='z')
        idx = c - 'a';
    else if(c >='A' && c <='Z')
        idx = c - 'A';
    
    return idx;
}

void countFreq(string s, int freq[26]){
    int idx;
    for(int i=0;i<s.size();i++){
        int idx = getCharIndex(s[i]);
        if(idx != -1)
            freq[idx]++;
    }
}

bool palindromePermutation(string s){
    int freq[26] = {0};
    countFreq(s,freq);
    bool odd_occurred = false;
    for(int i=0;i<26;i++){
        if(freq[i]%2 && !odd_occurred)
            odd_occurred = true;
        else if(freq[i]%2 && odd_occurred)
            return false;
    }
    
    return true;
}

int main() {
    string s = "Tact Coa";
    cout<<palindromePermutation(s)<<endl;
    
}