#include<iostream>
#include<stdlib.h>
using namespace std;

int  main()
{   long long int n;
    cin>>n;
    while(n)
    {
        long long int strlen,k;
        string str;
        cin>>strlen>>k>>str;
        int j=0;
        for(long long int i=0;i<strlen;i++)
        {
            if(str[i]=='0')
            {
                int l=min(i-j,k);
                swap(str[i],str[i-l]);
                j++;
                k=k-l;

            }



        }
cout<<str<<endl;


n--;
    }
    return 0;

}
