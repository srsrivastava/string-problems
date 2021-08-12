// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.

#include <iostream> 
using namespace std;

string countAndSay(int n) {
         if(n == 1)
          return "1";
        if(n == 2)
          return "11";
          
        string str = "11";
        
        for(int i = 3; i <= n; i++)
         {
             str += '$';
             int len = str.length();
             
             int cnt = 1;
             string tmp = "";
             
             for(int j = 1; j < len; j++)
              {
                  if(str[j] != str[j - 1])
                    {
                        tmp += cnt + '0';
                        tmp += str[j - 1];
                        cnt = 1;
                    }
                   else
                     cnt++;
              }
            str = tmp;  
         }
         
        return str;
}

int main () {
    int n;
    cin >> n;
    string s = countAndSay(n);
    cout << s;
    return 0;
}
