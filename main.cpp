/*����09��ڶ���
��������
����һ�������ֵ,�������ֵ��С���������Ĵ���
����:����ĵ�һ����Ϊ����ĳ���,�������Ϊ�����е�ֵ,�Կո�ָ�
���:�������ֵ����С�������еĴ���
sample
input:
4
-3 75 12 -3
output:
1 3 2 1
*/


//����û��������⣡����������������������
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
   sort(b,b+n);//����
   int nn = unique(b,b+n)-b;//��ɢ�� ȥ��

   for(int i = 0;i < n; i++)
    a[i] = lower_bound(b,b+nn,a[i])-b+1;
   for(int i = 0; i < n; i++)
      printf("%d ",a[i]);

   return 0;

}

