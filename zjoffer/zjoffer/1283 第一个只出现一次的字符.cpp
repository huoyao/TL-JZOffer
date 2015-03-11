#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
  char cc[10002];
  while(scanf("%s",cc)!=EOF)
  {
    vector<int> alpnum(26,0);
    vector<int> vecin;
    int ll=strlen(cc);
    for(int i=0;i<ll;++i){
      ++alpnum[cc[i]-'A'];
      vecin.push_back(cc[i]-'A');
    }
    int i;
    for(i=0;i<vecin.size();++i)
      if(alpnum[vecin[i]]==1)
      {
        printf("%d\n",vecin[i]);
        break;
      }
      if(i==vecin.size())
        printf("-1\n");
  }
  return 0;
}