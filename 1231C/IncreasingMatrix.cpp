#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
 
void check(int i,int j)
{
    if(arr[i][j]==0)
    {
            check(i+1,j);
            check(i,j+1);
            if(arr[i][j+1]>arr[i+1][j])
            {
                arr[i][j]=arr[i+1][j]-1;
            }
            else
            {
                arr[i][j]=arr[i][j+1]-1;
            }
 
    }
    else
        return;
}
 
int main()
{
int n,m;
cin>>m>>n;
 
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
 }
 int sum=0;
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]==0)
            check(i,j);
            sum+=arr[i][j];
 
    }
 }
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n-1;j++)
    {
        if(arr[i][j]<arr[i][j+1])
                cout<<"";
        else
           {
            sum=-1;}
 
    }
 }
 
  for(int i=0;i<m-1;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]<arr[i+1][j])
            cout<<"";
        else
           {
 
            sum=-1;}
 
 
    }
 }
 cout<<sum;
    return 0;
}
