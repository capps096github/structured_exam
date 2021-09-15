#include <stdio.h>
// number of times to do the experiment
#define NUM_OF_TIMES 4

int frequency[NUM_OF_TIMES];
float periodOfBreath[NUM_OF_TIMES];

float calculateMean();

int main()
{

  printf("Hold Your Breathe Challenge\n\n");

  printf("\nInput Your Frequency and Period:\n\n");

  // capture
  for (int i = 0; i < NUM_OF_TIMES; i++)
  {
    printf("FREQUENCY: ");
    scanf("%d", &frequency[i]);

    printf("PERIOD: ");
    scanf("%f", &periodOfBreath[i]);
    printf("\n");
  }

  // print
  printf("Period(x)     Frequency(f)\n");
  for (int y = 0; y < NUM_OF_TIMES; y++)
  {
    printf("%.1f                %d\n", periodOfBreath[y], frequency[y]);
  }

  printf("\nMean Of Holding Your Breathe is: %.4f", calculateMean());

  return 0;
}

float calculateMean()
{

  float totalfrequencyXProduct = 0, totalFrequency = 0, mean;
  // mean
  for (int i = 0; i < NUM_OF_TIMES; i++)
  {
    totalfrequencyXProduct += (frequency[i] * periodOfBreath[i]);
    totalFrequency += frequency[i];
  }

  mean = (totalfrequencyXProduct / totalFrequency);

  return mean;
}
