 int minDist(int a[], int n, int x, int y) {
        // code here
        int diff = INT_MAX;
        int prev = -1;
        for(int i=0; i<n; i++){
            if(a[i] == x || a[i] == y){
                if(prev != -1 && a[prev] != a[i])
                diff = min(diff, i-prev);
                
                prev = i;
            }
        }
        if(diff == INT_MAX)
        diff = -1;
        
        return diff;
    }
    
