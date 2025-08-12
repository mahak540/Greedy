int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
      int n=arr.size();
      int cnt=0,j=0,res=0;
      sort(arr.begin(),arr.end());
      sort(dep.begin(),dep.end());
        for(int i=0;i<n;i++)
        {
            while(j<n && dep[j]<arr[i])
            {
                cnt--;
                j++;
            }
            cnt++;
            
            res=max(res,cnt);
        }
        return res;
    }
