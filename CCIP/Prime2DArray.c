/*
Given a square matrix, calculate the sum of its diagonals if it is prime.

For example, the square matrix arr is shown below:

1 2 3

4 5 6

9 8 9

The left-to-right diagonal = 0+5+0=5 . The right to left diagonal = 0+5+3=8. Their absolute sum is 13.

Function description

diagonal Sum takes the following parameter:

int arr[n][m]: an array of integers Return

int: the sum

Input Format

The first line contains a single integer, n , the number of rows and columns in the square matrix arr. Each of the next n lines describes a row, arr[i] , and consists of n space-separated integers arr[i][j].

Constraints

0

Output Format

Return the sum of the matrix's two diagonals as a single integer, if it is prime no only.

Sample Input 0

3
11 2 4
4 5 6
10 8 -12
Sample Output 0

21
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,d1=0,d2=0,sum=0,num,c=0;
    int a[50][50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        { 
        c=0;
        for(num=1;num<1000;num++)
        {
        if(a[i][j]%num==0)
            {
             c++;
            }
        }
        if(c==2)
        {
        if(i==j)
          {
          d1=d1+a[i][j];
          }
          if((i+j)==(n-1))
          {
          d2=d2+a[i][j];
          }
         }
        }
          
    }
    sum=d1+d2;
    printf("%d",sum);
    return 0;
}
