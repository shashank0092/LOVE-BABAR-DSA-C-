#include <iostream>
using namespace std;

int main()
{

    int arr[100];

    cout << "ENTER SIZE OF ARRAY->";
    int n;
    cin >> n;

    cout << "ENTER VALUES IN ARRAY->";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "VALUES IN ARRAY->";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout<<"REVERSE VALUES IN ARRAY->";

        int START=0;
        int END=n-1;
    while (START<END)
    {
        int temp=arr[START];
        arr[START]=arr[END];
        arr[END]=temp;
        
        START++;
        END--;
        
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    

    return 0;
}