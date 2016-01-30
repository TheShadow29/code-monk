#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t; cin>>t;
	queue<int> call;
	int num;
	for(int i = 0; i < t; i++)
	{
		cin>>num;
		call.push(num);
	}
	int temp;
	int count = 0;
	for(int i = 0; i < t; i++)
	{
		cin>>num;
		while(call.front() != num)
		{
			temp = call.front();
			call.pop();
			call.push(temp);
			count++;
		}
		call.pop();
		count++;
	}
	cout<<count;
}