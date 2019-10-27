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
    {
        vector<int>v1,v2;
        string x;
        cin>>x;
        int temp;
        for(int i=0;i<x.size();i++)
        {   temp=x[i]-'0';
             if(temp % 2==0)
                v1.push_back(temp);
            else
                v2.push_back(temp);
        }


        int i,j;

        for( i=0,j=0;i<v1.size()&&j<v2.size();)
         {
             if(v1[i]<v2[j])
             {cout<<v1[i];
                i++;}
             else
             {cout<<v2[j];
                j++;}
         }

         if(i<v1.size()){
                for(int k=i;k<v1.size();k++)
                    cout<<v1[k]; }
        else if(j<v2.size())
            {
                for(int k=j;k<v2.size();k++)
                    cout<<v2[k];
                }
                cout<<endl;
    }
    return 0;
}
