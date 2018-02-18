//problem 1
#include <iostream>
#include<string.h>
#include<string>
#include<math.h>
#include <sstream>
using namespace std;
class Solution {
public:

string int_to_string(int  a)
    {
        stringstream s1;
        s1 << a;
        return s1.str();
    }
    string addBinary(string a, string b)
     {
         int i=a.length()-1;
         int j=b.length()-1;
         int c=0;
        int k,l;
          string sum="";

        while(i>=0 || j>=0)
         {
            l=b[j]-'0';
            k=a[i]-'0';
            if(i<0)
              k=0;
            else if(j<0)
              l=0;
            int r=k+l+c;
            if(r<2)
             {
              //sum=to_string(r)+sum; can be used instead of the function
              sum=int_to_string(r)+sum;
              c=0;
             }
            else
             {
              c=1;
              if(r==2)
                  sum="0"+sum;
              else
                 sum="1"+sum;
             }
             --i;--j;
          }
        if(c==1)
            sum= "1"+sum;
            return sum;
     }
    };

int main()
{
    Solution s1;
    string s2,s3;
    cin>>s2>>s3;

    cout<<"sum is:"<<s1.addBinary(s2,s3);
    return 0;
}
