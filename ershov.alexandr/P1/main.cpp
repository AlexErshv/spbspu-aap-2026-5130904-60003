#include <iostream>

int bigSmall(int arr[], int n)
{
  int count = 0;
  for(int i = 0; i < (n-2); i++)
  {
    if(arr[i] > arr[i + 1] && arr[i+1] > arr[i+2])
    {
      count++;
    }
  }
  return count;
}

int pifTr(int arr[], int n)
{
  int count = 0;
  for(int i = 0; i < (n-2); i++)
  {
    if(arr[i]*arr[i] + arr[i+1]*arr[i+1] == arr[i+2]*arr[i+2])
    {
      count++;
    }
    else if(arr[i]*arr[i] + arr[i+2]*arr[i+2] == arr[i+1]*arr[i+1])
    {
      count++;
    }
    else if(arr[i+1]*arr[i+1] + arr[i+2]*arr[i+2] == arr[i]*arr[i])
    {
      count++;
    }
  }

  return count;
}

int main()
{
  const int maxInt = 100;
  int bigSmallCount = 0, pifTrCount = 0, x = 0, c = 0;
  int arr[maxInt];

  while(true)
  {
    std::cin >> x;
    if(x == 0)
    {
      break;
    }

    arr[c] = x;
    c++;
  }

  if(std::cin.fail())
  {
    std::cerr << "ERROR: incorrect input data type" << "\n";
    return 1;
  }

  if(c < 3)
  {
    std::cerr << "ERROR: incorrect sequence length" << "\n";
    return 2;
  }

  bigSmallCount = bigSmall(arr, c);
  pifTrCount = pifTr(arr, c);

  std::cout << "Меньше предыдущего, но больше следующего: " << bigSmallCount << "\n";
  std::cout << "Пифагоровы тройки: " << pifTrCount << "\n";
  return 0;
}