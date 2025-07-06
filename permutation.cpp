#include<iostream>
#include<vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{  int n;
   cin>>n;
   if(n==2 or n==3)
   {
    cout<<"NO SOLUTION";
    return 0;
   }
   if(n==4)
   {
    cout<< 2<<" "<<4<<" "<<1<<" "<<3;
    return 0;
   }
   vector<int > arr(n);
  
   for (int i=0;i<n;i++)
   {
      arr[i]=i+1;
    }
    int c=n, d=n-1;
      for (int i=0;i<n;i++)
      {
       if(c>0)
       {
        cout<<c<<" ";
        c=c-2;
       }
       else{
        cout<< d<<" ";
        d=d-2;
       }

      }
   
     return 0;

   }



