#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map <string , int > umap;
    umap["one" ] = 1;
    umap["two" ] = 2;
    umap["three" ] = 3;
    umap["four" ] = 4;
    umap["five" ] = 5;
    umap["three" ] = 3;

    for (auto &x : umap )
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}