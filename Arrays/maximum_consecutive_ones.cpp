// maximum consecutive ones
#include <iostream>
using namespace std;
int missing(int arr[] , int n ){
    int count = 0;
    int max= 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else{
            count = 0;
        }
        if (max < count){
            max = count;
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << missing(arr,n);
    
    
    return 0;
}
