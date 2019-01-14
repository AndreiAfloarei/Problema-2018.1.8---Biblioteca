#include <iostream>
#include <fstream>

using namespace std;
ifstream in("data.in");
ofstream out("data.out");

int d ,k, n ,p ,nc[100], pc[100], i, j;
int main()
{in>>d>>k;
for(i=0;i<k;i++)
{
    in>>nc[i]>>pc[i];
}
for(i=0;i<k;i++)
    for(j=i+1;j<k;j++)
        if(pc[i]<pc[j])
{
    int aux=pc[i];pc[i]=pc[j];pc[j]=aux;
    aux=nc[i];nc[i]=nc[j];nc[j]=aux;


}
for(i=0;i<k;i++)
    out<<nc[i]<<" "<<pc[i]<<endl;
out<<endl;
j=1;
for(i=0;i<100;i++)
{int r=200;
    for(int l=0;l<k;l++)
        if(r>=pc[l]&&nc[l]!=0)

             if(l<=k-2)
                   {
                out<<pc[l]<<" ";
                nc[l]--;
                r=r-pc[l];


                            }
                else
                while(r>=pc[l]&&nc[l]!=0){
                out<<pc[l]<<" ";
                nc[l]--;
                r=r-pc[l];
                }
out<<endl;


}




    return 0;
}
