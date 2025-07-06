#include<iostream>
#include<vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{  int n;
   cin>>n;
   vector<int > arr(n);
  long long cnt=0;
   for (int i=0;i<n;i++)
   {
      cin>>arr[i];
    }
      for (int i=0;i<n-1;i++)
      {
        if(arr[i]>arr[i+1])
        { int d=arr[i]-arr[i+1];
            arr[i+1]+=d;
            cnt+=d;
        }
      }
     cout<<cnt;
     return 0;

   }



