
#include <stdio.h>

int main()
{
    char str[100]="omp";
    char sub[50]="op";
    int i,j,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==sub[j])
        {
            j++;
            
        }
        if(sub[j]=='\0')
            {
                count++;
                j=0;
            }
    }
    printf("%d",count);
    
    return 0;
}
