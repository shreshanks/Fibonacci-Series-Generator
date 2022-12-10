#define MAX_TERMS 20

int main()
{
  // Initialize the first two terms of the series
  int fib[MAX_TERMS] = {0, 1};

  // Generate the remaining terms of the series
  for (int i = 2; i < MAX_TERMS; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
  }

  // Print the Fibonacci series
  for (int i = 0; i < MAX_TERMS; i++)
  {
    printf("%d ", fib[i]);
  }

  return 0;
}