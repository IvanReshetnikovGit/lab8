#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
    deque<long> dq;
    multiset<long> mlst;

    for (int i = 0; i < 20; i++)
    {
        dq.push_back(rand() % 50);
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Sorted:\n";
    sort(dq.begin(),dq.end(),greater());

    for (int i = 0; i < dq.size(); i++)
        cout<<dq[i]<<" ";
    cout<<endl;
    cout<<endl;

    cout<<"Is more than 25:\n";
    for (int i = 0; i < dq.size(); i++)
    {
        if(dq[i] > 25)
        {
            mlst.insert(dq[i]);
            cout<<dq[i]<<" ";
        }
    }
    cout<<endl;
    cout<<endl;

    cout<<"Multiset with chosen values: \n";
    multiset <long> :: iterator it = mlst.begin();
    for (int i = 0; i < mlst.size(); i++,it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<endl;


    sort(dq.begin(),dq.end());
    it = mlst.begin();
    cout<<"Sorted first and second: \n";
    for (int i = 0; i < dq.size(); i++)
        cout<<dq[i]<<" ";
    cout<<endl;

    for (int i = 0; i < mlst.size(); i++,it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<endl;
    

    vector<long> vct;

    for (int i = 0; i < dq.size(); i++)
    {
        vct.push_back(dq[i]);
    }
    it = mlst.begin();
    for (int i = 0; i < mlst.size(); i++,it++)
    {
        vct.push_back(*it);
    }
    int count{};
    for (int i = 0; i < vct.size(); i++)
    {
        cout<<vct[i]<<" ";
        if(vct[i]>25)
            count++;
    }
    cout<<endl<<endl;
    cout<<"Amount of Values that are bigger than 25: "<<count<<endl;
    
    
    return 0;
}