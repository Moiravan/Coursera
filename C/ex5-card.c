#include <stdio.h>
#include <math.h>

void shuffle(int *deck[]);
void print(int *deck[]);

int main()
{
  int card[10000];
  int *deck[10000];
  int index = 0;

  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = NULL;
  shuffle(deck);
  print(deck);  
  return 0;
}

void shuffle(int *deck[])
{
  int index = 0; 
  while(deck[index] != NULL)
  {
     index++;   
  }

  int m = ceil(index/2.0);

  int* a = deck[0];
  int* b = deck[m];
  printf("a = %p\n", a);
  printf("b = %p\n", b);

  deck[0] = a;
  deck[1] = b;
  for(int i = 2; deck[i] != NULL; i++)
  {
    if(i % 2 == 0)
    {
      deck[i] = deck[i-2] + 1;
    }
    else
    {
      deck[i] = deck[i-2] + 1;
    }
     
  }

}

void print(int *deck[])
{
    int index = 0; 
    while(deck[index] != NULL)
    {
        printf("%d ", *deck[index]);
        index++;
    }
}