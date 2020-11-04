/*The city bus stations are located at equal distances (unit distance) from each other along a straight road. Each station has a unique station ID. The buses do not travel to all of the bus stations. The highway administration needs to determine the total distance that the buses cover.

Given the IDs of the bus stations that have a bus operating between them, write an algorithm to help the administration find the distance covered by all the city buses.

Input

The first line of the input consists of an integer K, representing the number of buses. Next Klines consist of two space-separated integers - A and B representing the IDs of the bus stations that have a bus operating between*/

#include <stdio.h>

int main()
{
    int a[100],b[100],k,i,j,l,sum=0,sub=0;
    scanf("%d",&k);
    
    
        for(i=0;i<k;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
        for(i=0;i<k;i++)
        {
            sum=sum+b[i]-a[i];  
        }
       
        for(i=0;i<k;i++)
        {
            if(b[i]>a[i+1])
            {
                sub=sub+b[i]-a[i+1];
            }
            
        }
         printf("%d",sum-sub);
       

    
}
