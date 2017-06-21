class Solution {
public:
    int myAtoi(string str) {
                int res = 0;
        
        //remove the null character:
        while(!str.empty() && str.at(0) == ' ') {
            str = str.substr(1, string::npos);
        }
        
        if(str.empty()) return res;
        
        //first character:
        bool negative = false;
        if(str.at(0) == '-') {
            negative = true;
        } else if(str.at(0) >= '0' && str.at(0) <= '9') {
            res = str.at(0) - '0';
        } else if(str.at(0) == '+') {
        } else return res;
        
        //the left string:
        int size = str.length();
        for(int i = 1; i < size; i++) {
            if(str.at(i) >= '0' && str.at(i) <= '9') {
                int num = str.at(i) - '0';
                if(res > (0x7fffffff - num)/10)  {//exceed
                    return negative? 0x80000000:0x7fffffff;
                }
                res = res*10 + num;
            } else break;
        }
        return negative?-res:res;
    }
};
