#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<vector>
using namespace std;
 
int main()
 
{   int n;
    cin>>n;
 
    while(n--)
    {   int inp;
        int itr=0;
        int n=3;
        int sum=0;
        int mult=1;
        cin>>inp;
        while(inp>sum)
        {
 
            sum=sum+mult;
            mult=mult*3;
            itr++;
        }
 
        for(int i=itr;i>=0;i--)
        {   float temp=i;
            if(sum-pow(3.0,i)>=inp)
                {sum=sum-pow(3.0,i);
                }
 
        }
 
        cout<<sum<<endl;
    }
 
 
    return 0;
}
