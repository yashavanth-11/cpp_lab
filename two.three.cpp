# include <iostream>
using namespace std;
void minmax (const int a [], int n, int &min, int &max)
{
    min = max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        else if (a[i] > max)
            max = a[i];
    }
}
   void minmax_ptr (const int a[], int n, int *min, int *max)
{
    *min = *max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < *min)
            *min = a[i];
        else if (a[i] > *max)
            *max = a[i];
    }
}
int main()
{ 
    int data[] = { 7, 2, 9, 4, 1 };
    int lo,hi;
    minmax (data, 5, lo, hi);
cout<<" ref min = "<<lo<<" ref max = "<<hi<<endl;
    minmax_ptr (data, 5, &lo, &hi);
    cout<<"Ptr min = "<<lo<<" Ptr max = "<<hi<<endl;
    return 0;

}