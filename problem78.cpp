#include <iostream>
#include <vector>

using namespace std;

void subsets(vector<int> &x, int n, vector<int> &v, int i)
{

    if (i == n)
    {
        for (int var : v)
        {
            cout << var << " ";
        }
        cout<<endl;
        return;
    }

    v.push_back(x[i]);
    subsets(x, n, v, i + 1);

    v.pop_back();
    subsets(x, n, v, i + 1);
}

int main()
{

    vector<int> v;
    vector<int> g = {1, 2, 3, 4, 5};
    subsets(g, 5, v, 0);

}
