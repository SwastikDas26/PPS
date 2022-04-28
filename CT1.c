/* 
Question: 
This is the competition between Memory and Crow. 
Momory initially has n integers b1, b2,..., bn written in a row.
For all i from 1 to n, values ai are defined by the crows performing the following procedure:

The crow sets ai initially 0.

The crow then adds bi to ai, substracts bi + 1, adds the vi + 2 number, and so on until the n'th number.
Thus, ai = bi - bi +1 + bi + 2 - bi + 3...
Memory gives you the values a1, a2, ..., an, and he now wants you to find the initial number b1, b2,..., nb written in the row?

Can you do it?
*/

#include <stdio.h>
int main()
{
    int competition[100002];
    int n;
    scanf("%d",&n);
    int i,sum;
    for(i=0;i<n;i++)
        scanf("%d",&competition[i]);
    for(i=0;i<n;i++)
    {
        sum=competition[i]+competition[i+1];
        printf("%d ",sum);
    }
	return 0;
}