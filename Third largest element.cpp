int largest(int a[], int n){
        int mx = a[0], mxIndex = 0;
    
        for(int i=1; i<n; i++){
            if(a[i] > mx){
                mx = a[i];
                mxIndex = i;
            }
        }
        a[mxIndex] = INT_MIN;
        return mx;
    }
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<3)
         return -1;
         int ans;
         for(int i=0; i<3; i++){
             ans = largest(a, n);
         }
         return ans;
    }
