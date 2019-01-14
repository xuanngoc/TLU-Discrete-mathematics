#ifndef DOTHI_H
#define DOTHI_H
#include <fstream>
#include "list.h"
using namespace std;

class DoThi
{
private:
    int N;
    int a[100][100];
public:
    DoThi()
    {
        N = 0;
    };
    DoThi(const char * fileName)
    {
        ifstream fin(fileName);
        fin >>N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                fin>>a[i][j];
            }
        }

        fin.close();
    };

    int GetBac(int v)const{
        int count =0;
        for(int i=0; i< N; i++){
            if(a[v-1][i] == 1){
                count ++;
            }
        }  
        return count;
    };
    int GetDinh()const{
        return N;
    };
    List<int> KeVoiDinh(int dinh)const
    {
        List<int> r;
        for(int i=0; i<N; i++)
        {
            if(a[dinh -1][i] == 1)
            {
                r.Add(i+1);
            }
        }
        return r;
    };

    List<int> DFS(int v)const
    {

    };
};

#endif