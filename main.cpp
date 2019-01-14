#include <iostream>
using namespace std;
#include "dothi.h"
#include "list.h"

int main()
{
    DoThi dt("dothi.txt");

    //cout<<dt.GetBac(2)<<endl;

    int SoDinh = dt.GetDinh();
    for(int i=0; i< SoDinh; i++)
    {
        cout<<i+1<<": "<<dt.GetBac(i+1)<<endl;
    }

    cout<<dt.KeVoiDinh(3)<<endl;

    return 0;
}