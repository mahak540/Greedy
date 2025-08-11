int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int n=gas.size();
        int totalgas=0,currgas=0,startidx=0;
        for(int i=0;i<n;i++)
        {
            currgas+=gas[i]-cost[i];
            totalgas+=gas[i]-cost[i];
            
            if(currgas<0)
            {
                currgas=0;
                startidx=i+1;
            }
        }
        if(totalgas<0)
        return -1;
        
        return startidx;
    }
