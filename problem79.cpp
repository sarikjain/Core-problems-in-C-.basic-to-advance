#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> p;
void subsets(vector<int> &x, int n, vector<int> &v, int i)
{

    if (i == n)
    {
      p.push_back(v);
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
for(vector<int> var : p){
    for(int var1 :var){
        cout<<var1;
    }
    cout<<endl;
}


}
