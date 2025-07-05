#include<iostream>
#include<vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{  string s;
   cin>>s;
   
   long long cnt=1;
   long long maxi=-1;
   for (long long i=0;i<s.length()-1;i++)
   {
      if(s[i]==s[i+1])
      {
        cnt++;
      }
      else{
        maxi=max(cnt, maxi);
        cnt=1;
      }
    }
       maxi=max(cnt, maxi);
       cout<<maxi;
       return 0;

   }



