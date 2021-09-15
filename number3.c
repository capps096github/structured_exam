#include <stdio.h>
// number of time to do the experiment
#define ARRAY_SIZE 2

int frequency[ARRAY_SIZE];
float periodOfBreath[ARRAY_SIZE];

float calculateMean();

int main()
{

  printf("Hold Your Breathe Challenge\n\n");

  printf("\nInput Your Frequency and Period:\n\n");

  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf("FREQUENCY: ");
    scanf("%d", &frequency[i]);

    printf("PERIOD: ");
    scanf("%f", &periodOfBreath[i]);
    printf("\n");
  }

  printf("Period(x)     Frequency(f)\n");
  for (int y = 0; y < ARRAY_SIZE; y++)
  {
    printf("%.1f                %d\n", periodOfBreath[y], frequency[y]);
  }

  printf("\nMean Of Holding Your Breathe is: %.4f", calculateMean());

  return 0;
}

float calculateMean()
{

  float totalfrequencyXProduct = 0, totalFrequency = 0, mean;

  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    totalfrequencyXProduct += (frequency[i] * periodOfBreath[i]);
    totalFrequency += frequency[i];
  }

  mean = (totalfrequencyXProduct / totalFrequency);

  return mean;
}
