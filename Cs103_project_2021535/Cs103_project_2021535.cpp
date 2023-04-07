#include<iostream>;
using namespace std;



int largestElement(int arr[] , int size) 
{
    int max = arr[0];
    for (int i = 1; i <= size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
        
    return max;
}
int main()
{
    int s;
    cout << "Enter size Rayyan please: ";
    cin >> s;
    int largest;
    int arr2['s'];
    for (int i = 0; i <= s; i++)
    {
        cout << "Enter number Rayyan please: ";
        cin >> arr2[i];
    }
     largest=largestElement( arr2, s);
     cout <<"Highest number Rayyyan please " << largest << endl;
}