bool oneReplace(string first, string second){
    bool replace  = false;
    for(int i=0;i<first.length();i++){
        if(first[i] != second[i] && replace){
            return false;;
        }
        else if(first[i] != second[i] && !replace)
            replace = true;
    }
    
    return true;
}

bool oneInsert(string first, string second){
    int index1 = 0;
    int index2 = 0;
    while(index1 < first.length() && index2 < second.length()){
        if(first[index1] != second[index2]){
            if(index1 != index2)
                return false;
            index2++;
        }
        else{
            index1++;
            index2++;
        }
    }
    
    return true;
}
bool oneAway(string s1,string s2){
    if(s1.length() == s2.length())
        return oneReplace(s1,s2);
    else if(s1.length() + 1 == s2.length())
        return oneInsert(s1,s2);
    else if(s1.length() - 1 == s2.length())
        return oneInsert(s2,s1);
    return false;
}



int main() {
    string s1 = "PLE";
    string s2 = "PALBE";    
    cout<<oneAway(s1,s2)<<endl;
    
}
