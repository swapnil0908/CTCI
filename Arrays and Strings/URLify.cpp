//extended length = truelength + 2* sapces (since one space is already present till truelenght)
string URL(string s, int truelength){
    int spacecount = 0, i=0,j=0;
    for( i=0;i<truelength;i++){
        if(s[i] == ' ')
            spacecount++;
    }
    
    int ex_len = truelength + 2 * spacecount; //extended length;
    i = ex_len - 1;
    for(j=truelength-1;j>=0;j--){
        if(s[j] != ' ')
            s[i--] = s[j];
        else{
            s[i--] = '0';
            s[i--] = '2';
            s[i--] = '%';
            
        }
    }
    
    return s;
}


int main() {
    string s1 = "Mr John Smith    ";
    cout<<"Actual String: "<<s1<<endl;
    string result = URL(s1,13);
    cout<<"Modified String: "<<result<<endl;
}