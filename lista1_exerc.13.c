int main()

  {
      int num=0;

      printf("escolhar um numero:");
      scanf("%d",&num);

      if (num>10) {
        printf("e maior que 10");
      }
      else if(num==10){
        printf("igual a 10");
      }

      else {
        printf("e menor que 10");
      }
      return 0;

  }
