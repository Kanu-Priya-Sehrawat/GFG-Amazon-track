vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int> res;
        unordered_set<int> hash;
        for(int i=0; i<n; i++){
            if(hash.find(arr[i])==hash.end()){
                hash.insert(arr[i]);
                res.push_back(arr[i]);
            }
        }
        return res;
    }
