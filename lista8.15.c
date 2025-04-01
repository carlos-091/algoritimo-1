#include<stdio.h>

int main()
{
  int m[5][5]={{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};
  double det=1;


  for (int i = 0; i < 5; i++)
  {
        for (int j = 0; j <5; j++)
        {
            printf("|%d|", m[i][j]);
        }
        printf("\n");
  }
  for (int i = 0; i < 5; i++)
  {
        for (int j = 0; j <5; j++)
        {
          if(m[5][5]==0)
          {
            printf("determinante e 0");
            return 0;
          }
          double fator=(double)m[j][i]/m[i][i];
          for(int k=i;k<5;k++)
          {
            m[k][j] -= fator* m[i][k];
          }
        }
  }

  for (int i = 0; i < 5; i++) {
        det *=m[i][i];
    }

    printf("Determinante da matriz 5x5: %.2f\n", det);


  return 0;
}
