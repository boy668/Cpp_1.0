#include <iostream>
using namespace std;
const int N = 20;
int arr[N];
int main()
{
int n = 0;
cin >> n;
int i = 0;
// ‰?
for(i=0; i < n; i++)
cin >> arr[i];
//≈≈–Ú
for(i = 0; i < n-1; i++)
{
int j = 0;
for(j = 0; j <= n-1-i; j++)
{
if(arr[j] < arr[j+1])
{
int tmp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = tmp;
}
}
}
// ‰≥ˆ
for(i=0; i < n; i++)
{
cout << arr[i] << endl;
}
return 0;
}
