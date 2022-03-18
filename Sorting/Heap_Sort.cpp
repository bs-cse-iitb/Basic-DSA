#include<iostream>
using namespace std;

void printarray (int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
}


void heapify (int a[], int n, int i)
{
  int l, r, max;
  l = 2 * i + 1;
  r = 2 * i + 2;
  max = i;
  if (l < n && a[l] > a[max])
    max = l;
  if (r < n && a[r] > a[max])
    max = r;
  if (max != i)
    {
      swap (a[i], a[max]);
      heapify (a, n, max);
    }
}

void buildMaxHeap (int a[], int n)
{
  int i;
  for (i = (n / 2) - 1; i >= 0; i--)
    {
      heapify (a, n, i);
    }

}

void heapSort (int a[], int n)
{
  buildMaxHeap (a, n);
  int i;
  for (i = 0; i < n; i++)
    {
      swap (a[0], a[n - 1 - i]);
      heapify (a, n - i - 1, 0);
    }
}

int main ()
{
  // Driver code
  int a[] = { 9, 5, 7, 3, 2, 8 };
  int n = sizeof (a) / sizeof (int);
  //cout<<n;
  heapSort (a, n);
  printarray (a, n);
  return 0;

}
