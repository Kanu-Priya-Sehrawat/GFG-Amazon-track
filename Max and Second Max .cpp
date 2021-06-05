vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        vector<int> res;
        int mx1 = INT_MIN;
        int mx2 = INT_MIN;
        for(int i=0; i<sizeOfArray; i++){
            if(arr[i]>mx1){
                mx2 = mx1;
                mx1 = arr[i];
            }
            else if(arr[i]>mx2 && arr[i] != mx1){
                mx2 = arr[i];
            }
        }
        if(mx2 == INT_MIN)
        mx2 = -1;
        res.push_back(mx1);
        res.push_back(mx2);
        return res;
        
    }
