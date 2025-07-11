#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        
        int a[n],b[n],c[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            b[j]=a[j];
        }
        
        
        
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(b[k]<=b[j])
                {
                    int temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
        }

        
        for(int j=0;j<n;j++)
        {
            c[j]=abs(a[j]-b[j]);
            
            printf("%d ",c[j]);
        }

        printf("\n");
    }

      
    return 0;
}
