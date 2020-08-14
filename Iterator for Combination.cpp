class CombinationIterator {
public:
    int t=0,x=0;
    string str[10006];

    CombinationIterator(string characters, int combinationLength) {
        int tsz=pow(2,characters.size())-1;
        for(int i=tsz;i>=0;i--)
        {
            int count=0;
            for(int j=0;j<characters.size();j++)
            {
                if(i&(1<<(characters.size()-j-1)))
                    count++;
            }
            if(count==combinationLength)
            {
                 for(int j=0;j<characters.size();j++)
                {
                    if(i&(1<<(characters.size()-j-1)))
                        {
                              str[x]+= characters[j];

                        }
                }
                 x++;
            }
        }
    }

    string next() {
        if(t<x)
        return str[t++];
        return "";

    }

    bool hasNext() {
        if(t<x)
            return true;
        return false;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
*/ 
