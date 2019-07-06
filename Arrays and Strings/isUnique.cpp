bool isUnique(string s){
    if(s.size()>128)
        return false;
    int arr[128] = {0};
    for(int i=0;i<s.length();i++){
        int val = (int)s[i];
        if(arr[val])
            return false;
        arr[val] = true;
    }
    
    return true;
}


int main() {
    string s = "bellevue";
    bool unique = isUnique(s);
    cout << unique << endl;
}