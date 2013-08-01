#include <stdio.h>
int main()
{
    char array[10001], str[10001];
    int m, i, j, count1 = 0, count2 = 0, n, k;
    scanf("%d", &m);
    while (count1 < m)
    {
        count1 ++;
      scanf ("%d %d\n", &n, &k);
      count2 = 0;
       while (count2 < n)
       {
           int a = 0;
           count2 ++;
           //得到一串字符；
          gets(array);
          //将字符串中的空格取出；
          j = 0;
          for (i = 0; array[i]!='\0'; i ++)
          {
             if (array[i] != '  ')
             {
               str[j] = array[i];
                j ++;


          }
          printf("%d ",j);
          array[10001] = '\0';
          if (k > 0)
          {
              //将字符串移位；
             for (j = 0; j < 10001; j ++)
             {
                 array[j] = str[j] + k - 'a' + 'A';

             }

          puts(array);
          }
          else
          {
           for (j = 0; j < 10001; j ++)
             {
                 array[j] = str[j] - k - 'a' + 'A';
             }
          puts(array);
          }
       }
    }



    return 0;
}
