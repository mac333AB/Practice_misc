/******************************************************************************

n=4

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

using cpp

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	int n=4;
	int col=8;
	for(int i=0; i<n; i++) {
		for(int j=0; j<8; j++) {
			if(j<=i || j>=((col-1)-i))
			{
				cout<<"*";

			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
	// reverse (lower portion)
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<8; j++) {
			if(j<=i || j>=((col-1)-i))
			{
				cout<<"*";

			}
			else
				cout<<" ";
		}
		cout<<endl;
	}


	return 0;
}
