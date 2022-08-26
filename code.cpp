#include<iostream>
using namespace std;
int main()
{
    int tot=0;
    cin>>tot;
    int ar[tot], i, e, j, f=0;
    for(i=0; i<tot; i++)
        cin>>ar[i];
    cin>>e;
    for(i=0; i<tot; i++)
    {
        if(ar[i]==e)
        {
            for(j=i; j<(tot-1); j++)
                ar[j] = ar[j+1];
            f++;
            i--;
            tot--;
        }
    }
    if(f==0)
        for(i=0; i<tot; i++)
        {
            cout<<ar[i]<<" ";
        }
    else
        for(i=0; i<tot; i++)
        {
            cout<<ar[i]<<" ";
        }
    cout<<endl;
    return 0;
}
