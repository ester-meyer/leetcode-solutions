class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)
            return s;
        int len = s.length();
        char* str1 = new char[len];
        char* str2 = str1;
        for(int i=0; i<numRows; i++){
            int jump = (numRows-i-1)*2;
            if(!jump)
                jump = (numRows-1)*2;
            int x=i;
            while(x<len){
                *str1=s[x];
                str1++;
                x+=jump;
                if(i !=0 && i!=numRows-1)
                    jump=(numRows-1)*2-jump;
            }
        }
        return string(str2, len);
    }
};