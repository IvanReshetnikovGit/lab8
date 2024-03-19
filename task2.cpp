#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <ctime>
#include <algorithm>

using namespace std;

class superInt{
    public:
    int value;
    superInt(int value) 
    {
        this->value = value;
    }

    bool operator<(const superInt& other) const
    {
        return value < other.value;
    }
    bool operator>(const superInt& other) const
    {
        return value > other.value;
    }
};

int main()
{
    srand(time(NULL));
    deque<superInt> dq;
    multiset<superInt> mlst;

    for (int i = 0; i < 20; i++)
    {
        superInt b(rand() % 50);
        dq.push_back(b);
        cout<<dq[i].value<<" ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Sorted:\n";
    sort(dq.begin(),dq.end(),greater<superInt>());

    for (int i = 0; i < dq.size(); i++)
        cout<<dq[i].value<<" ";
    cout<<endl;
    cout<<endl;

    cout<<"Is more than 25:\n";
    for (int i = 0; i < dq.size(); i++)
    {
        if(dq[i].value > 25)
        {
            mlst.insert(dq[i]);
            cout<<dq[i].value<<" ";
        }
    }
    cout<<endl;
    cout<<endl;

    cout<<"Multiset with chosen values: \n";
    multiset <superInt> :: iterator it = mlst.begin();
    for (int i = 0; i < mlst.size(); i++,it++)
    {
        cout<<it->value<<" ";
    }
    cout<<endl; 
    cout<<endl;


    sort(dq.begin(),dq.end());
    it = mlst.begin();
    cout<<"Sorted first and second: \n";
    for (int i = 0; i < dq.size(); i++)
        cout<<dq[i].value<<" ";
    cout<<endl;

    for (int i = 0; i < mlst.size(); i++,it++)
        cout<<it->value<<" ";
    cout<<endl;
    cout<<endl;
    

    vector<superInt> vct;

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
        cout<<vct[i].value<<" ";
        if(vct[i].value>25)
            count++;
    }
    cout<<endl<<endl;
    cout<<"Amount of Values that are bigger than 25: "<<count<<endl;
    
    
    return 0;
}