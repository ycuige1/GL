//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
int main(void)
{
 int n,s=0;
 n = LancerDe();
 while(n!=1)
  {
      if(n%2==0)
      {
          s=s+n;
      }
      else if(n==3)
      {
          s=s*2;
      }
      else if(n==5)
      {
          if(s>=2)
          {
              s=s-2;
          }
          else
          {
              s=0;
          }
      }
  }

    return 0;
}
