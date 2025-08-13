    int minCandy(vector<int> &arr) {
        // code here
        int n=arr.size();
        int total=n,i=1;
        while(i<=n)
        {
            if(arr[i]==arr[i-1])
            {
                i++;
                continue;
            }
            int peak=0;
            while(i<n && arr[i]>arr[i-1])
            {
                peak++;
                total+=peak;
                i++;
            }
            if(i==n){
            return total;
        }
        int v=0;
        while(i<n && arr[i]<arr[i-1])
        {
            v++;
            total+=v;
            i++;
        }
        total-=min(peak,v);
    }
    return total;
    }
