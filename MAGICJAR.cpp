#include <stdio.h>

int main(void) {
int T;
scanf("%d",&T);

for (int i=1;i<=T;i++)
{
    int N;
    scanf("%d",&N);
    long long int result=0, A[N];


    for(int i=0;i<N;i++)
    { scanf("%lli",&A[i]);
    }
    long long int sum=0;
    for (int i=0;i<N;i++)
    {sum= sum + A[i]-1;}
    result = sum+1;
    printf("%lli\n", result);








}
}


