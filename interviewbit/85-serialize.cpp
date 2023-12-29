struct Compare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
        return a.first < b.first;
    }
};

string Solution::serialize(vector<string> &A) {
    set <pair<int , string> , Compare> ans;
    for(int i = 0 ; i < A.size() ; i++){
        ans.insert(make_pair(A[i].size(),A[i]));
    }
    string str;
    for(auto it : ans){
        str += it.second + to_string(it.first) + "~";
    }
    return str;
}
