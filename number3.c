#include <stdio.h>
// number of times to do the experiment
#define NUM_OF_TIMES 6

int frequency[NUM_OF_TIMES];
float periodOfBreath[NUM_OF_TIMES];

float calculateMean();

int main()
{

  printf("----Hold Your Breathe Challenge----\n\n");

  printf("\nInput Your Period Of Holding Breathe and It's Corresponding Frequency:\n\n");

  // CApture the Period And Frequency
  for (int i = 0; i < NUM_OF_TIMES; i++)
  {

    printf("PERIOD OF BREATHE (x): ");
    scanf("%f", &periodOfBreath[i]);

    printf("FREQUENCY (f): ");
    scanf("%d", &frequency[i]);

    printf("\n");
  }

  // Print Out the Frequency Table
  printf("Frequency Table\n\n");
  printf("Period(x)     Frequency(f)\n");
  for (int y = 0; y < NUM_OF_TIMES; y++)
  {
    printf("%.1f                %d\n", periodOfBreath[y], frequency[y]);
  }

  // Print And Calculate the Mean
  printf("\nMean Of Holding Your Breathe is: %.4f", calculateMean());

  return 0;
}

// This Function calculates and returns the Mean
float calculateMean()
{

  // This variable calculates the total of the product of the frequency and period
  // Sum of fx
  float totalfrequencyXProduct = 0;

  // This is for the total frequency (Sum of f)
  float totalFrequency = 0;

  float mean;
  // mean logic
  for (int i = 0; i < NUM_OF_TIMES; i++)
  {
    totalfrequencyXProduct += (frequency[i] * periodOfBreath[i]);
    totalFrequency += frequency[i];
  }

  mean = (totalfrequencyXProduct / totalFrequency);

  return mean;
}
