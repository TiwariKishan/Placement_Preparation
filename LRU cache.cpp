struct Cache
{
    int _key,_value;
    Cache(int key=0,int value=0)
    {
        _key=key;
        _value=value;
    }
};
class LRUCache {
public:
    list<Cache> cache;
    unordered_map<int,list<Cache> ::iterator > m;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        auto addr=m[key];
        cache.push_front(*addr);
        cache.erase(addr);
        m[key]=cache.begin();
        return cache.begin()->_value;
    }
    
    void put(int key, int value) {
        if(m.find(key)==m.end())
        {
            cache.push_front(Cache(key,value));
            m[key]=cache.begin();
            if(cache.size()>cap)
            {
                int last_key=cache.back()._key;
                m.erase(last_key);
                cache.pop_back();
            }
        }
        else
        {
            list<Cache> ::iterator addr=m[key];
            addr->_value=value;
            cache.push_front(*addr);
            cache.erase(addr);
            m[key]=cache.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
