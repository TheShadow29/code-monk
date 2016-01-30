#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int q;cin>>q;
	stack<int> s;
	int x;
	for(int i = 0; i < q; i++)
	{
		cin>>x;
		if(x == 1)
		{
			if(!s.empty())
			{
				cout<<s.top()<<endl;
				s.pop();
			}
			else
			{
				cout<<"No Food"<<endl;
			}
		}
		else if(x == 2)
		{
			cin>>x;
			s.push(x);
		}
	}
}