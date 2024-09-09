/******************************************************************************
n=4
   *
  * *
 *   *
*     *
 *   *
  * *
   *
using cpp
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	int n=4;
	for(int i=0; i<n; i++) {
		for(int j=0; j<((n-i)+((i*2)-1)); j++) {
			if(j==(n-1-i))
			{
				cout<<"*";

			}
			else
				cout<<" ";
		}

		cout<<"*";
		cout<<endl;
	}
	// reverse hollow triangle
	for(int i=n-1-1; i>=0; i--) {
		for(int j=0; j<((n-i)+((i*2)-1)); j++) {
			if(j==(n-1-i))
			{
				cout<<"*";

			}
			else
				cout<<" ";
		}

		cout<<"*";
		cout<<endl;
	}


	return 0;
}
