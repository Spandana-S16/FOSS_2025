#include <stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][3];
    for(int i =1 ; i <=n ;i++){
        a[i][0]=i;
        a[i][1]=pow(i,2);
        a[i][2]=pow(i,3);
    }
    for(int i =1 ; i <= n;i++){
        printf("%d|%d|%d \n",a[i][0],a[i][1],a[i][2]);
    }
}
