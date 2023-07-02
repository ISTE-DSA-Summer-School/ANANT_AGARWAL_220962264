#include<iostream>
using namespace std;

int main(){
int a[20],i,n,j,temp;

cout<<"enter number of elements in array:"<<endl;
cin>>n;


for(i=0;i<n;i++){

        cout<<"enter numbers in array:";
        cin>>a[i];}

for(i=0,j=n-1;i<n/2;i++,j--)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

cout<<"reverse printing of array is:";
for(i=0;i<n;i++)
{
    cout<<" "<<a[i];
}

return 0;
}
