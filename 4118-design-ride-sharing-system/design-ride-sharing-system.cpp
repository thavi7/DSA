class RideSharingSystem {
public:
    bool availableRider[1001]{};
    queue<int>riders,drivers;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        riders.push(riderId);
        availableRider[riderId]=1;
    }
    
    void addDriver(int driverId) {
        drivers.push(driverId);
       
    }
    
    vector<int> matchDriverWithRider() {
        vector<int>ans={-1,-1};
        while(riders.size() && drivers.size())
        {
            int rider=riders.front();
            riders.pop();
            if(availableRider[rider]){
                ans[1]=rider;
                ans[0]=drivers.front();
                drivers.pop();
                break;
            }
          
        }
        return ans;
    }
    
    void cancelRider(int riderId) {
        availableRider[riderId]=0;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */