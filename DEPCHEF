#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    for (int i=1; i<=T;i++)
    {
        int N;
        scanf("%d",&N);
        int a[N+1],d[N+1];
        a[0]=0;
        d[0]=0;
        int result3=0,result2=0,result1=0,flag=0;

        for (int i=1;i<N+1;i++)
        {scanf("%d",&a[i]); }

        for (int i=1;i<N+1;i++)
        {
        scanf("%d",&d[i]);
        }

        for(int i=2;i<N;i++)
        {
          if(a[i-1]+a[i+1]<d[i])
          {
           if(result3<d[i])
           result3= d[i];
           flag=1;
          }
        }

        if(a[2]+a[N]<d[1])
        { result1= d[1];
        flag=1;
        }

        if (a[1]+a[N-1]<d[N])
        {result2= d[N];
        flag=1;
        }




        if(result1>=result2 && result1>=result3 && flag==1)
        {printf("%d\n", result1);}


        else if(result2>=result3 && result2>=result1 && flag==1)
        {printf("%d\n", result2);}


        else if (result3>=result2 && result3>=result1 && flag==1)
        {printf("%d\n", result3);}

        else
            printf("%d\n", -1);



     }

}


