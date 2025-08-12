int maxPartitions(string &s) {
        // code here
        vector<int>last(26,-1);
        for(int i=0;i<s.size();i++)
        
        last[s[i]-'a']=i;
        int cnt=0,a=-1;
        for(int i=0;i<s.size();i++)
        {
            a=max(last[s[i]-'a'],a);
            
            if(a==i)
            cnt++;
        }
        return cnt;
            
    }
