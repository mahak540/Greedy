int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n=arr.size(),i=0,j=0,cnt=0;
        while(i<n && j<n)
        {
            while(i<n && arr[i]!='P')
            i++;
            while(j<n && arr[j]!='T')
            j++;
            
            if(i<n && j<n && abs(i-j)<=k)
            {
                cnt++;
                i++;
                j++;
            }
            else if(j<n && j<i)
            {
                j++;
            }
            else if(i<n && i<j)
            {
                i++;
            }
        }
        
        return cnt;
    }
