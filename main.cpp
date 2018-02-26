/*北航09年第二题
数组排序
输入一个数组的值,求出各个值从小到大排序后的次序。
输入:输入的第一个数为数组的长度,后面的数为数组中的值,以空格分割
输出:各输入的值按从小到大排列的次序。
sample
input:
4
-3 75 12 -3
output:
1 3 2 1
*/


//还是没整懂这个题！！！！！！！！！！！！
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a[100];
    int b[100];
    scanf("%d",&n);

    int i;
    for(i = 0;i < n; i++)
   {
        scanf("%d",&a[i]);
        b[i] = a[i];
   }
   sort(b,b+n);//排序
   int nn = unique(b,b+n)-b;//离散化 去重

   for(int i = 0;i < n; i++)
    a[i] = lower_bound(b,b+nn,a[i])-b+1;
   for(int i = 0; i < n; i++)
      printf("%d ",a[i]);

   return 0;

}

