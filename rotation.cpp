#include<iostream>

using namespace std;

bool rotation(string s1, string s2){
    if(s1.length() != s2.length()) //Check if their length is same
        return false;
    
    string temp = s1 + s2;

    return (temp.find(s2) != string::npos); 

}

int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if (rotation(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}
