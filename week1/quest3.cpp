#include<iostream>
using namespace std;

int main()
{
    int i,n,j,k;
    
    cout<<"enter number of rows in inverted mirrored right triangle star pattern:"<<endl;
    cin>>n;





    for(i=0;i<n;i++)
    {   
        
        for(k=0;k<(n-i);k++)
        {cout<<" ";}
        for(j=0;j<i+1;j++)
        {cout<<"* ";}
        cout<<endl;
    }
return 0;
}

