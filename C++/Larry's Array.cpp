#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int A[n];
        for(int i=0; i<n; i++)
            cin>>A[i];
        
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(A[i]>A[j])
                    count++;
                
                
            }
            
            
        }
        
        
        if(count%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
        
        
    }
    
    
    
    
    
}
