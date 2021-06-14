/*
A tree is called as a acyclic graph means a graph with no cycle. In general height of tree is denoted by H. A binary tree with N nodes can have maximum of (pow(2,H) – 1) nodes in a tree. Binary tree is a tree in which a node can have maximum of two childrens. Similarly we can make verious trees such that a node can have 1,2,3,4,..... any number of children. Assume that root is present at height 0.

Fing the maximum number of nodes possible in a ‘n-ary’ tree with height H.

Hint : Binary means 2-ary, ternary means 3-ary and so on.

Input Format

Input contains two integers n & H respectively.

Constraints

1 <= n <= 6

1 <= H <= 10

Output Format

Print the number of nodes.

Sample Input 0

3 10
Sample Output 0

88573
Sample Input 1

2 16
Sample Output 1

131071
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,h,p=0;
    scanf("%d",&n);
    scanf("%d",&h);
    if(n==2)
    {
      p=(pow(n,h+1))-1;
            printf("%d",p);

    }
    else
    {
    
         p=(pow(n,h+1))-1;
            printf("%d",(p/(n-1)));

    }
    return 0;
}
