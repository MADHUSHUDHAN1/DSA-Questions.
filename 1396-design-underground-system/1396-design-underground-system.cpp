class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> checkInMap;
    unordered_map<string,pair<double,int>> routMap;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checkInMap[id];
        //checkInMap[id].erase();
        
        string checkInStation = checkIn.first+"_"+stationName;
        routMap[checkInStation].first += t-checkIn.second;
        routMap[checkInStation].second += 1;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string stationName = startStation+"_"+endStation;
        return routMap[stationName].first/routMap[stationName].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */