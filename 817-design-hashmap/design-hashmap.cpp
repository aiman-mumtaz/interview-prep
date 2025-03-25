class MyHashMap {
public:
    pair<int,int> a[1000006];
    MyHashMap() {
        for(int i = 0;i<1000006;i++){
            a[i] = {i,-1};
        }
    }
    
    void put(int key, int value) {
        a[key] = {key,value};
    }
    
    int get(int key) {
        return a[key].second;
    }
    
    void remove(int key) {
        a[key] = {key,-1};
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */