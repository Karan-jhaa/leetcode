class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0,totalcost=0;
        int start=0,currgas=0;
        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
            currgas+=(gas[i]-cost[i]);
            if(currgas<0){
                start=i+1;
                currgas=0;
            }
        }
        return totalgas<totalcost?-1:start;
    }
};