#include<iostream>
using namespace std;

int main(){
int a[20],i,n,j,pos,small;

cout<<"enter number of elements in array:"<<endl;
cin>>n;

for(i=0;i<n;i++){

        cout<<"enter numbers in array:";
        cin>>a[i];}

for(i = 0; i < n-1; i++) // loop for number of pass
  {
   pos = i; small = a[i];
     for(j=i+1; j<n; j++) //loop for searching the smallest
     {
        if(small > a[j])  // finding the smallest
	        { pos = j; // pos for interchanging
              small = a[j]; // assigning current small value
	        }
     }
     
     a[pos] = a[i]; //interchanging values
     a[i] = small; 
    }



cout<<"sorted array is:";
for(i=0;i<n;i++)
{
    cout<<" "<<a[i];
}

return 0;
}
