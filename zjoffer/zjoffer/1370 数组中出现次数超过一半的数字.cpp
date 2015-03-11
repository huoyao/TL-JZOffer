#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> vec(n);
    int cnt=0,elem;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&vec[i]);
      if (cnt==0)
      {
        elem=vec[i];
        ++cnt;
      }else
      {
        if (vec[i]!=elem)
          --cnt;
        else
          ++cnt;
      }
    }
    if (cnt==0)
      printf("-1\n");
    else
    {
      cnt=0;
      for(int i=0;i<n;++i)
        if(vec[i]==elem)
          ++cnt;
      if(cnt>n/2)
        printf("%d\n",elem);
      else 
        printf("-1\n");
    }
  }
  return 0;
}