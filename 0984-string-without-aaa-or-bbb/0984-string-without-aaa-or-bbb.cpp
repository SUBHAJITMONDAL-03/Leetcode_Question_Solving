class Solution {
public:
    string strWithout3a3b(int a, int b) {
        int ca=0,cb=0;
        string res="";
        while(a>0 || b>0){
            
            if((a>=b  && ca<2) || (b>=a && cb>=2) ){
                
                    res+='a';
                    ca++;
                    cb=0;
                    a--;
                
                    
            }
            else{
                res+='b';
                cb++;
                ca=0;
                b--;
            }
        }
        return res;
    }
};
