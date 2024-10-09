#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> nums, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += nums[i];
	}
	return sum;
}
//
//
//
//
//
//
//
//
//
//
//
//
bool isValid(vector<int> nums, int n, int m, int maxAllowed)
{
	int stu = 1, pages = 0;
	for (int i = 0; i < n; i++)
	{
		if (nums[i] > maxAllowed)
		{
			return false;
		}
		if (nums[i] + pages <= maxAllowed)
		{
			pages += nums[i];
		}
		else
		{
			stu++;
			pages = nums[i];
		}
	}
	return stu > m ? false : true;
}
int allocateBooks(vector<int> nums, int n, int m)
{
	if (m > n)
	{
		return -1;
	}
	int st = 0, end = sum(nums, n);
	int ans = -1;
	while (st <= end)
	{
		int mid = st + (end - st) / 2;
		if (isValid(nums, n, m, mid))
		{
			ans = mid;
			end = mid - 1;
		}
		else
		{
			st = mid + 1;
		}
	}
	return ans;
}
int main()
{

	vector<int> Arr = {20,15,17};
	int n = 3,
		m = 2;

	cout << "Answer is " << allocateBooks(Arr, n, m) << endl;

	return 0;
}
