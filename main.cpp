#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i, n, *a;
		n = argc-1;
 	  a = new int[n];
		for(i = 0 ; i < n ; i++) 
      {
			    a[i]=atoi(argv[i+1]);
		      cout<< "a[" << i << "]=" <<a[i]<<endl;
		  }

  int *pa = a;
  int *pb = a+n-1;
  int temp;
  cout<< "Original: ";
  for (int i = 0; i < n ; i++)
    {
      cout<<*a+i<<" ";
    }
    cout<<endl;
  
    pa = a; 
    pb = a+n-1;
  
    cout<<"Reverse: ";
    for (i = 0; i < n / 2; i++) 
    {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }
    pa = a;
    for (int i = 0; i < n; i++ , pa++)
    {
      cout<<*pa<<" ";
    }

 delete [] a;  
}