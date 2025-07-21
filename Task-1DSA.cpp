//Remove duplicate elements from array//
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7,i,j,k;
    int count = 0; 
    
    for(i=0;i<n-count;i++)
    {
        for(j=i+1;j<n-count;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-count-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                count++;
                j--;
            }
        }
    }
    cout<<"After removing duplicates:"<<endl;
    for (i=0;i<n-count;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}

//Largest element in array//
#include<iostream>
using namespace std;

int main()
{
	int a[]={3,6,4,2,7};
	int i,max,n=5;
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<"Largest element :"<<max;
	return 0;
}

//sort ascending or descending//
#include<iostream>
using namespace std;

int main(){
	int a[]={5,7,10,11,4};
	int n=5,i,j;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		  }
	 }
	}
	cout<<"ascending:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"descending:";
	for(i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}

///check +ve or -ve///
#include<iostream>
using namespace std;

int main(){
	int p=0,ne=0,i,n,a[10];
	cout<<"Enter no. of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			p++;
		}
		else{
			ne++;
		}
	}
	cout<<"Postive count = "<<p<<endl;
	cout<<"Negative count = "<<ne;
	return 0;
}

//Magic sort//
#include<iostream>
using namespace std;

int main(){
	int a[]={5,7,4,2,10,11};
	int i,j,n=6,odd=0,even=0,os,es;
	int o[100],e[100];
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			e[even]=a[i];
			even++;
		}
		else{
			o[odd]=a[i];
			odd++;
		}
	}
	
	cout<<"Sorted array : ";
		for(i=0;i<even-1;i++){
		 for(j=0;j<even-i-1;j++){
			if(e[j]>e[j+1]){
				swap(e[j],e[j+1]);
			}
		}
	}
	for(i=0;i<even;i++){
		cout<<e[i]<<" ";
	}
	
	   for(i=0;i<odd-1;i++){
		 for(j=0;j<odd-i-1;j++){
			if(o[j]<o[j+1]){
				swap(o[j],o[j+1]);
			}
		}
	}
	for(i=0;i<odd;i++){
		cout<<o[i]<<" ";
	}

	return 0;
}