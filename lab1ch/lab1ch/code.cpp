/** \file code.cpp */

#include <iostream>
#include<conio.h>
using namespace std;
int* a;
void quickSort(int l, int r)///quick sorting function
{
    int x = a[l + (r - l) / 2];
   
    int i = l;
    int j = r;
    
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i<r)
                quickSort(i, r);
    
    if (l<j)    
        quickSort(l, j);    
}
int main()
{
    int n;///amount of number in the masive
    cin >> n;
    a=new int[n];
	for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quickSort(0, n-1);
    for(int i = 0; i < n; i++)///show result;
    {
        cout<<a[i]<<" ";
    }
	_getch();
    return 0;
}