class MedianFinder {
public:
    vector<int>ds;
    MedianFinder() {}
    void addNum(int num) {
        ds.push_back(num);
    }
    
    double findMedian() {
        sort(ds.begin(),ds.end());
        int n=ds.size();
        if(n&1)return ds[n/2];
        else{
        return (ds[n/2]+ds[n/2-1])/2.0;
        }
    }
};
